#include "binary_trees.h"

/**
 * binary_tree_is_root - a function that checks if a node is a root
 * @node: the node to be checked
 *
 * Return: 0 if it is a root and 1 if it is not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
