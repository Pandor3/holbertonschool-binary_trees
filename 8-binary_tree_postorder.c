#include "binary_trees.h"

/**
 * binary_tree_postorder - Function which will go through a binary tree -
 * - using the post-order traversal method
 *   @tree: pointer to the root node
 *   @func: pointer to a funcrion that call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
