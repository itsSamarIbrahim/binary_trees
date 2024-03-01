#include "binary_trees.h"

/**
 * 
*/

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree)
	{
		if (tree->right)
			right += binary_tree_height_2(tree->right);

		if (tree->left)
			left += binary_tree_height_2(tree->left);

		if (left > right)
			return (left);
		else
			return (right);	
	}
	else
		return (0);
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