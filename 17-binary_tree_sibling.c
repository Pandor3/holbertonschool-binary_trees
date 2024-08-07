#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Description: This function returns a pointer to the sibling
 * node of a given node in a binary tree. If the node is NULL,
 * or if the node has no parent or sibling, the function returns
 * NULL. Siblings are defined as nodes that share the same parent.
 *
 * Return: Pointer to the sibling node, or NULL if there is no sibling.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
