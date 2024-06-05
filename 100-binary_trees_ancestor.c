#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function to find the lowest commond ancestor
 * @first: First node
 * @second: Second node
 * Return: The pointer to the node ancestor
 */


binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}
	if (first == second->parent)
	{
		return ((binary_tree_t *)first);
	}
	if (first->parent == second)
	{
		return ((binary_tree_t *)second);
	}
	if (first->parent == second->parent)
	{
		return (first->parent);
	}
	if (first->parent == second->parent->parent)
	{
		return (first->parent);
	}
	else
	{
		return (NULL);
	}
}


