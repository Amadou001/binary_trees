#include "binary_trees.h"


/**
 * binary_tree_height - function to find the heigh of a tree
 * @tree: Pointer to the root node
 * Return: The height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rheight;
	size_t lheight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		if (lheight > rheight)
		{
			return (lheight);
		}
		else
		{
			return (rheight);
		}
	}
}

