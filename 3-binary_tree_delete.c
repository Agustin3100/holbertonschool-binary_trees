#include "binary_trees.h"
/**
 * binary_tree_delete - inserts a node as the right-child of another node
 * @tree: the number of integers passed to function
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}

	else if (tree)
	{
		free(tree);
	}
	else if(tree->left && tree->right)
	{
		free(tree->left);
		free(tree->right);

	}
}
