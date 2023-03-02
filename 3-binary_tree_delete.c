#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes a binary tree
 * @tree: Tree to be deleted
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *p, *node = tree;

	if (!tree)
		return;
	while (node)
	{
		if (node->left)
		{
			node = node->left;
			continue;
		}
		else if (node->right)
		{
			node = node->right;
			continue;
		}
		else
		{
			if (node->parent)
			{
				p = node->parent;
				if (p->left == node)
					p->left = NULL;
				else
					p->right = NULL;
				free(node);
				node = p;
				continue;
			}
			else
			{
				free(node);
				return;
			}
		}
	}
}
