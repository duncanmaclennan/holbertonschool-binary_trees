#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 * @tree: pointer to node
 * Return: 1 if yay (a leaf), otherwise 0 if nay
 */

int binary_tree_is_leaf(const binary_tree_t *tree)
{
	if (tree != NULL && tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_is_full - checks if parent nodes have a L & R child
 * @tree: pointer to root of binary tree
 * Return: 1 if yay (full), otherwise 0 if nay
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 1) /* checks if it's the bottom row */
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
/* checks if there is both L & R child */
	{
		/* recusion to check if both are full */
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
