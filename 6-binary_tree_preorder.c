#include "binary_trees.h"

/**
 * binary_tree_preorder - a function that goes through a binary tree
 *                        using pre-order traversal
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to the function to be applied to each node's value
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
