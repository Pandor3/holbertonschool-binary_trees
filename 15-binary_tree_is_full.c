#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Description: A full binary tree is a tree in which every node
 * has either 0 or 2 children. This function recursively checks
 * each node to ensure it meets this criteria. If the tree is NULL,
 * the function returns 0.
 *
 * Return: 1 if the tree is full, otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int nodes_left_fulls;
	int nodes_right_fulls;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);


	nodes_left_fulls = binary_tree_is_full(tree->left);
	nodes_right_fulls = binary_tree_is_full(tree->right);

	if (nodes_left_fulls && nodes_right_fulls)
		return (1);
	else
		return (0);
}
