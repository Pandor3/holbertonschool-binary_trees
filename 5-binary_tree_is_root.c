#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree
 * @node: Pointer to the node to check
 * Return: 1 if node is root, 0 if not or if node is NULL.
 * Description:
 * This function checks whether a given node is the root
 * of a binary tree. A node is considered the root if its
 * parent pointer is NULL. The function returns 1 if the
 * node is the root, otherwise returns 0. If the node
 * pointer itself is NULL, the function also returns 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
