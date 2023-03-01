#include "binary_trees.h"
/**
 * binary_tree_node - this function creates a binary tree node
 * @parent: parent node
 * @value: the value
 * Return: the new note
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	node->parent = parent;
	if (parent && !parent->left)
		parent->left = node;
	else
	{
		if (parent && !parent->right)
			parent->right = node;
	}
	return (node);

}
