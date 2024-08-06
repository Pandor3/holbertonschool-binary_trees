#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Description: This function calculates the size of a binary tree,
 * which is the total number of nodes present in the tree. It uses
 * a recursive approach to traverse the tree, counting each node
 * as it visits. If the tree is NULL, the function returns 0.
 *
 * Return: The size of the tree as a size_t. If the tree is NULL,
 * the function returns 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left;
	size_t size_right;
	size_t size_all;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	size_all = ((size_left + size_right) + 1);

	return (size_all);
}
