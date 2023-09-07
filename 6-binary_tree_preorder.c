#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root of the tree to traverse
 * @func: pointer to func to call for each node. node value must be passed.
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	/* call each node with value passed */
	func(tree->n);
	/* recursion */
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
