#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/** Check for NULL parent */
	if (parent == NULL)
	{
		return (NULL);
	}

	/** Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	/** Check for memory allocation failure */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/** Initialize fields of the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/** Check if parent already has a left-child */
	if (parent->left != NULL)
	{
		/** Set the existing left-child as the new node's left-child */
		new_node->left = parent->left;

		/** Update the parent pointer of the existing left-child */
		parent->left->parent = new_node;
	}

	/** Set new_node as the parent's left-child */
	parent->left = new_node;

	return (new_node);
}
