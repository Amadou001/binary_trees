#include "binary_trees.h"

/**
 * binary_tree_sibling- Find the sibling of a node
 * @node: Pointer to the root node
 * Return: The pointer to the node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL  || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->right == node)
	{
		return (node->parent->left);
	}
	else if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (NULL);
}

