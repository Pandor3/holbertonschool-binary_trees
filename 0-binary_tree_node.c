#include "binary_trees.h"

/**
 * binary_tree_node - function which will create a new node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: i or NULL
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	i = malloc(sizeof(binary_tree_t));
	if (i == NULL)
		return (NULL);
	i->n = value;
	if (i->n == '\0')
	{
		free(i);
		return (NULL);
	}
	i->parent = parent;
	i->left = NULL;
	i->right = NULL;
	return (i);
}
