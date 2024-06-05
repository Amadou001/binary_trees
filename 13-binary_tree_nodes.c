#include "binary_trees.h"

/**
 * binary_tree_nodes - function to find the size of a tree
 * @tree: Pointer to the root node
 * Return: The number of node
*/


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		return (nodes);
	}
}

