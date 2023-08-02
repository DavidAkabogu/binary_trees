#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_right_child = binary_tree_node(parent, value);
	
	if (new_right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right_child->right = parent->right;
		parent->right->parent = new_right_child;
	}
	parent->right = new_right_child;

	return (new_right_child);
}
