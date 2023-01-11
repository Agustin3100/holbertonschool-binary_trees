#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{ 
	binary_tree_t *head;

	head = malloc(sizeof(struct binary_tree_s));

	if(!head)
	{
		free(head);
		return (NULL);

	}
	head->parent = parent;
	head->n = value;

	return head;
}
