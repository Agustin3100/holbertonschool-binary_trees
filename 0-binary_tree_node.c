#include "binary_trees.h"
/**
 * binary_tree_node -  creates a binary tree node
 * @parent: string to be printed between numbers
 * @value: value of n to insert on the node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *head;

	head = calloc(sizeof(struct binary_tree_s), 1);
		head->parent = parent;
		head->n = value;

		return (head);
}
