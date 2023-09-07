#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_depth(tree->parent));
}

/**
 * is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @depth: Depth of the leftmost leaf node.
 * @level: Level of the current node.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 *         If tree is NULL, returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree->left);

	return (is_perfect(tree, depth, 0));
}
