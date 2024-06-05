#include "binary_trees.h"

int is_perfect(const binary_tree_t *tree, int depth, int level);
int leftmost_leaf_depth(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);


/**
 * is_perfect - Function to check is the tree is perfect
 * @tree: Pointer to the node
 * @depth: Depth of the node
 * @level: level of the node
 * Return: True if yes otherwise 0
 *
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}

	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * leftmost_leaf_depth - Function to calculate the left depth
 * @tree: Pointer to the node
 * Return: The depth
 */

int leftmost_leaf_depth(const binary_tree_t *tree)
{
	int depth;

	depth = 0;
	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * binary_tree_is_perfect - Function to check if a tree is perdect
 * @tree: Pointer to the root node
 * Return: 1 if perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
	{
		return (0);
	}

	depth = leftmost_leaf_depth(tree);

	return (is_perfect(tree, depth, 0));

}
