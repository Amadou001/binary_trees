#include "binary_trees.h"


/**
 * height - find the height of the tree
 * @tree: Pointer to the root node
 * Return: The height of the tree
*/
int height(const binary_tree_t *tree)
{
	int lheight;
	int rheight;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lheight = height(tree->left);
		rheight = height(tree->right);
	}
	if (lheight > rheight)
	{
		return (lheight + 1);
	}
	else
	{
		return (rheight + 1);
	}
}


/**
 * binary_tree_balance - Function to verify the depth
 * @tree: Pointer to the root node
 * Return: The balance factor in a tree
 */



int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (height(tree->left) - height(tree->right));
}



