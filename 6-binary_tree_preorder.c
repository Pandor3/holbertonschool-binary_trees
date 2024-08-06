#include "binary_trees.h"

/**
 * binary_tree_preorder - Function which will go through the binary tree -
 * - using the pre-order traversal method
 *   @tree: pointer to the root node of the tree
 *   @func: pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	if (tree->left == NULL)
		return;
	binary_tree_preorder(tree->right, func);
	if (tree->right == NULL)
		return;
}
