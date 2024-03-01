#include "binary_trees.h"

/**
 * 
*/

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = tree->left ? 1 + binary_tree_height_2(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height_2(tree->right) : 0;	

	return ((left > right) ? left : right);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = 1 + binary_tree_height_2(tree->left);
	right = 1 + binary_tree_height_2(tree->right);

	return (left - right);
}