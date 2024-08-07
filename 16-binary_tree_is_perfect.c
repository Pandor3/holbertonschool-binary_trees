#include "binary_trees.h"

/**
 * size - function used to see the size of a node
 * @node: pointer to the chosen node
 * Return: 1
 */

int size(const binary_tree_t *node)
{
	int count;

	for (count = 0; node != NULL; count++)
	{
		node = node->left;
	}
	return (count);
}


/**
 * if_perfect - function used to check if a binary tree is perfect -
 * - or not
 *   @tree: pointer to the root node
 *   @count: integer used to know the size of the tree
 *   @niveau: integer used to know the level of the node chosen
 *   Return: 1, 0 or the result if a binary tree is -
 *   - perfect or not
 */

int if_perfect(const binary_tree_t *tree, int count, int niveau)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (count == niveau + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (if_perfect(tree->left, count, niveau + 1) &&
			if_perfect(tree->right, count, niveau + 1));
}

/**
 * binary_tree_is_perfect - function which checks if if_perfect -
 * - is correct or not
 *   @tree: pointer to the root node
 *   Return: 0 or count
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);
	count = size(tree);
	return (if_perfect(tree, count, 0));
}
