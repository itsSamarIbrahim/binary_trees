#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node
 *				as the left-child of another node
 * @parent: a pointer to the parent node where the new node will be inserted
 * @value: an integer value to be assigned to the new node
 *
 * Return: pointer to the newly created node if insertion is successful,
 *		otherwise returns NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;

	return (new_node);
}
