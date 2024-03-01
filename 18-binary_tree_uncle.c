#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: pointer to the node whose uncle is to be found
 * Return: pointer to the uncle node if found, otherwise returns NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent, *uncle = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == parent)
			uncle = grandparent->right;
		else
			uncle = grandparent->left;
	}

	return (uncle);
}
