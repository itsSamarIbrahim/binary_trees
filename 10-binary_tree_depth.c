#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of
 *                     a node in a binary tree
 * @tree: a pointer to the node whose depth is to be computed
 * 
 * Return: the depth of the node in the binary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	
	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}