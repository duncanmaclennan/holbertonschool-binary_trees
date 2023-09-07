#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root of the tree to traverse
 * Return: depth of tree if yay, otherwise 0 if nay
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
	{
		return (depth);
	}
	while (tree->parent != NULL)
	{
		depth = depth + 1;
		tree = tree->parent;

	}
	return (depth);
}
