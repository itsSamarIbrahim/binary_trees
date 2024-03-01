#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the nodes with
 *                     at least 1 child in a binary tree
 * @tree: pointer to the root node of the binary tree
 *
 * Return: the number of nodes in the binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_left_child, has_right_child, count, left_count, right_count;

	if (tree == NULL)
		return (0);

	has_left_child = (tree->left != NULL);
	has_right_child = (tree->right != NULL);
	count = has_left_child || has_right_child ? 1 : 0;

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (count + left_count + right_count);
}
