#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: Number of nodes with
 * at least 1 child, or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_parent_left;
	size_t node_parent_right;
	size_t all_parents;

	if (tree == NULL)
		return (0);
	node_parent_left = binary_tree_nodes(tree->left);
	node_parent_right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		all_parents = ((node_parent_left + node_parent_right) + 1);
	else
		all_parents = node_parent_left + node_parent_right;
	return (all_parents);
}
