#include "binary_trees.h"

/**
 * binary_tree_uncle - func that finds the uncle of node
 * @node: pointer to node to find uncle
 * Return: pointer to uncle node if yay, otherwise NULL if nay
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		/* checks if there is parent->parent (grandparent) */
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
/* checks if parent of input node is left child of its own parent */
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
}
