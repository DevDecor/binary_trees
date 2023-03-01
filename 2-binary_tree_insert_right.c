#include "binary_trees.h"
/**
 * binary_tree_insert_right - Left insertion
 * @parent: Parent node
 * @value: value
 * Return: new Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(NULL, value), *p = NULL;

	if (node == NULL)
		return (NULL);
	node->parent = parent;
	if (parent)
	{
		p = parent->right;
		parent->right = node;
	}
	node->right = p;
	if (p)
		p->parent = node;
	return (node);
}
