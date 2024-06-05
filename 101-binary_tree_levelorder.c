#include "binary_trees.h"

/**
 * binary_tree_levelorder - Function to print data of the node
 * @tree: Pointer to the root node
 * @func: Function to print data
 * @level: level of the tree
 */

void printCurrentLevel(const binary_tree_t *tree,
		int level, void (*func)(int));
int height(const binary_tree_t *tree);

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (tree == NULL || func == NULL)
	{
		return;
	}

	h = height(tree);
	for (i = 1; i <= h; i++)
	{
		printCurrentLevel(tree, i, func);
	}
}

/**
 * printCurrentLevel - Function to print all nodes at same level
 * @tree: POinter to the root node
 * @level: Level of the tree
 * @func: Function used for printing
*/

void printCurrentLevel(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		printCurrentLevel(tree->left, level - 1, func);
		printCurrentLevel(tree->right, level - 1, func);
	}
}


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

