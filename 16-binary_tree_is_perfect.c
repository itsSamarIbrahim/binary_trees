#include "binary_trees.h"

/**
 *
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	if (tree == NULL)
	{
		return 0;
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + ((left_height > right_height) ? left_height : right_height));
}

size_t binary_tree_count_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
	{
		return 0;
	}

	left_nodes = binary_tree_count_nodes(tree->left);
	right_nodes = binary_tree_count_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, total_nodes, perfect_nodes;
	
	if (tree == NULL)
	{
		return 0;
	}

	height = binary_tree_height(tree);

	total_nodes = binary_tree_count_nodes(tree);

	perfect_nodes = (1 << height) - 1;

	return (total_nodes == perfect_nodes);
}