#include "binary_trees.h"

/**
 * binary_tree_depth - function which checks the depth of a node
 * @tree: pointer to the node which needs to be measured
 * Return: NULL or node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		node++;
		tree = tree->parent;
	}
	return (node);
}
