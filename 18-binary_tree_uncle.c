#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Description: This function returns a pointer to the uncle of
 * a given node in a binary tree. The uncle is defined as the
 * sibling of the node's parent. If the node is NULL, or if the
 * node's parent or grandparent is NULL, the function returns NULL.
 *
 * Return: Pointer to the uncle node, or NULL if there is no uncle.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);

}
