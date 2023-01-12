#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the right-child of another node
 * @parent: string to be printed between numbers
 * @value: the number of integers passed to function
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
	{
		return (NULL);
	}

	new = binary_tree_node(parent, value);

	if (parent->left)
	{
		parent->left->parent = new;
		new->left = parent->left;
		parent->left = new;
	}
	else
	{
		parent->right = NULL;
		parent->left = new;
	}
	return (new);
}
