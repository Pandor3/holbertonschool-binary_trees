#include "binary_trees.h"

/**
 * count_nodes - count the value of nodes on each side
 * @tree: pointer to the tree
 * Return: nodes from left or right, 0 or 1
 */

int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	if (count_nodes(tree->left) < count_nodes(tree->right))
		return (count_nodes(tree->left) + 1);
	else
		return (count_nodes(tree->right) + 1);
}


/**
 * binary_tree_balance - function which will measure the balance factor -
 * - of a binary tree
 *   @tree: pointer to the binary tree
 *   Return: 0 or i - z
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i;
	int z;

	if (tree == NULL)
		return (0);
	i = count_nodes(tree->left);
	z = count_nodes(tree->right);
	return (i - z);
}
