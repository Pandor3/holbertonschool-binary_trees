#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Description:
 * Recursively deletes a binary tree by
 * traversing the tree in post-order
 * and freeing each node. If the tree is
 * NULL, the function does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
