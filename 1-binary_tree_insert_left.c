#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert
 * a node at the right of the tree
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * Return: Pointer to the new node or Null if fail
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}

