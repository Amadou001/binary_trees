#include "binary_trees.h"

/**
 * binary_tree_depth - Function to verify the depth
 * @tree: Pointer to the root node
 * Return: The depth of the given node
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}

