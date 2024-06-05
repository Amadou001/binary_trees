#include "binary_trees.h"

/**
 * binary_tree_uncle - Function to check if a tree is perdect
 * @node: Pointer to the root node
 * Return: The pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->right == node->parent)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
}

