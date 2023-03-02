#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if the node is root
 * @node: the node
 * Retrun: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
