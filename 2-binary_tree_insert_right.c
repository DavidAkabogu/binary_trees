#include "binary_trees.h"

/**
 * binary_tree_insert_right - this function inserts a node
 *			as the right-child of another node
 * @parent: the pointer points to the parent node with a right-child insertion
 * @value: this is the value held by the right-child node
 * Return: returns a pointer to the created node,
 *		or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_right_child = binary_tree_node(parent, value);

        if (parent->right != NULL)
        {
                new_right_child->right = parent->right;
                parent->right->parent = new_right_child;
        }
        
        parent->right = new_right_child;

	return (new_right_child);
}
