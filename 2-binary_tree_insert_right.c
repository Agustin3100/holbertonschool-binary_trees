#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: string to be printed between numbers
 * @value: the number of integers passed to function
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
		parent->right = new;
	}
	else
	{
		parent->left  = NULL;
		parent->right = new;
	}
	return (new);
}
