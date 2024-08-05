#include "binary_trees.h"

/**
 * binary_tree_insert_right - function which will put a node on the
 * right side of another node
 * @parent: pointer to the node where to put the new node
 * @value: value stored in the new node
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	if (node->n == '\0')
	{
		free(node);
		return (NULL);
	}

	node->left = NULL;
	node->right = parent->right;
	if (node->right != NULL)
		node->right->parent = parent;

	parent->right = node;
	node->parent = parent;
	return (node);
}
