#include "binary_trees.h"

/**
 * binary_tree_postorder - Function to transerve a tree
 * @tree: Pointer to the root node
 * @func: s a pointer to a function to call for each node
 * Return: NO value to be returned
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

