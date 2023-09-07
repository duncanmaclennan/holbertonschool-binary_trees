#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * is_perfect - Auxiliary function to check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @height: The height of the tree.
 * @level: The current level in the tree.
 *
 * Return: 1 if tree is perfect, otherwise 0.
 */
int is_perfect(const binary_tree_t *tree, int height, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, height, level + 1) &&
			is_perfect(tree->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
	{
		return (0);
	}

	height = (int)binary_tree_height(tree);
	return (is_perfect(tree, height, 0));
}
