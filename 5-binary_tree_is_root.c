#include "binary_trees.h"


/**
 * binary_tree_is_root - function to check if a node is a root
 * @node: Pointer to the root node
 * Return: 1 if yes otherwise no
*/


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

