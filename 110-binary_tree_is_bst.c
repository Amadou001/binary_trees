#include "binary_trees.h"
#include <limits.h>
/**
 * is_bst_helper - Helper function to check if tree is a BST
 * @tree: Pointer to the root node
 * @min: Minimum value
 * @max: Maximum value
 * Return: 1 if bst otherwise 0
 */


int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->n <= min || tree->n >= max)
	{
		return (0);
	}

	return is_bst_helper(tree->left, min, tree->n) &&
		is_bst_helper(tree->right, tree->n, max);
}

/**
 * binary_tree_is_bst - Function to check if bt is a bst
 * @tree: Pointer to the root node
 * Return: 1 if bst otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

