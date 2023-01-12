#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;


	if (!parent)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));

	new->parent = parent;
	new->n = value;
	

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
