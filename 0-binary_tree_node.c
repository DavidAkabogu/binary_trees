#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node
 * @parent: this pointer points to the parent node of the node created
 * @value: this is the value held by the node created
 * Return: returns a pointer to the newly created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
