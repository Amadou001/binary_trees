#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check wether the
 * binary tree is leaf or not
 * @node: Pointer to the node to check
 * Return: 1 if leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->right == NULL && node->left == NULL);
}

