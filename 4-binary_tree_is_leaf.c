#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function which checks if a node is a leaf
 * @node: pointer to the node which needs to be checked
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
