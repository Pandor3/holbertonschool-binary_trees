#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: This function calculates the height of a binary tree
 *              using a recursive approach. The height is determined
 *              by finding the longest path from the root node down
 *              to the farthest leaf node. If the tree is NULL, the
 *              function returns 0.
 *
 * Return: The height of the tree as a size_t. If the tree is NULL,
 *         the function returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
