#include "binary_trees.h"
/**
 * binary_tree_insert_left - Left insertion
 * @parent: Parent node
 * @value: value
 * Return: new Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(NULL, value), *p = NULL;

	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	node->parent = parent;
	p = parent->left;
	parent->left = node;
	if (p)
	{
		node->left = p;
		p->parent = node;
	}
	return (node);
}
