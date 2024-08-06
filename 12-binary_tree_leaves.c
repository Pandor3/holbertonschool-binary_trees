#include "binary_trees.h"

/**
 * binary_tree_leaves - function which counts the number of leaves
 * @tree: pointer to the root node
 * Return: node or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		node++;
	}
	node += binary_tree_leaves(tree->left);
	node += binary_tree_leaves(tree->right);
	return (node);
}
