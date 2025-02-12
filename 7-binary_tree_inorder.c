#include "binary_trees.h"

/**
 * binary_tree_inorder - function which will go through a binary tree -
 * - using the in-order traversal method
 *   @tree: pointer to the root node
 *   @func: pointer to the function that calls each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
