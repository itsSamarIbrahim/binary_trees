#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node
 *				as the right-child of another node
 * @parent: a pointer to the parent node where the new node will be inserted
 * @value: an integer value to be assigned to the new node
 *
 * Return: pointer to the newly created node if insertion is successful,
 *		otherwise returns NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

        new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);
}
