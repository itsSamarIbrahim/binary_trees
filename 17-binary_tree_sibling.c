#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: pointer to the node whose sibling is to be found
 * Return: pointer to the sibling node if found, otherwise returns NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
