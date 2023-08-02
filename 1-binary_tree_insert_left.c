#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function inserts a node
 *				as the left-child of another node
 * @parent: this pointer points to the parent node with a left-child insertion
 * @value: this is the value held by the left-child node
 * Return: return a pointer to the created node,
 *		or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_left_child = malloc(sizeof(binary_tree_t));

	if (new_left_child == NULL)
	{
		return (NULL);
	}

	new_left_child->parent = parent;
	new_left_child->n = value;
	new_left_child->right = NULL;

	if (parent->left != NULL)
	{
		new_left_child->left = parent->left;
		parent->left->parent = new_left_child;
	}
	else
	{
		new_left_child->left = NULL;
	}

	parent->left = new_left_child;
	return (new_left_child);
}
