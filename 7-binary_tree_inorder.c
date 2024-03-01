#include "binary_trees.h"

/**
 * binary_tree_inorder - a function that goes through a binary tree
 *                       using in-order traversal
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to the function to be applied to each node's value
 *
 * Return: void
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func)
}