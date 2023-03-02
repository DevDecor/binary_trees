#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using pre-order traversal.
 * @t: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *t, void (*func)(int))
{
	if (t && func)
	{
		binary_tree_postorder(t->left, func);
		binary_tree_postorder(t->right, func);
		func(t->n);
	}
}
