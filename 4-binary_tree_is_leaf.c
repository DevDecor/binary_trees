#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if node is leaf
 * @node: The node
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
