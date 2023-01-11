#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *head;

	head = calloc(sizeof(struct binary_tree_s),1);

		head->parent = parent;
		head->n = value;

		return (head);
}
