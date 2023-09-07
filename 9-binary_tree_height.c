#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, otherwise 0.
 *         If node is NULL, return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}

	return (0);
}

/**
 * binary_tree_height - goes through binary tree using post-order traversal
 * @tree: pointer to the root of the tree to traverse
 * Return: height of tree if yay, otherwise 0 if nay
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	/* if node is a leaf, it is at the bottom/line 0 */
	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
	{
		return (0);
	}

	if (binary_tree_is_leaf(tree) == 0)
	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);

		/* determine which side is taller  */
		if (left_h >= right_h)
		{
			left_h = left_h + 1;
			return (left_h);
		}
		right_h = right_h + 1;
		return (right_h);
	}
	return (0);
}
