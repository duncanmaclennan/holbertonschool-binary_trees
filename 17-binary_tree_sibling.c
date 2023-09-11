#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find sibling
 * Return: pointer to sibling node if yay, otherwise NULL if nay
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left) /* checks if node is left child */
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
