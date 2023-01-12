#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;


    if (!parent)
    {
        return (NULL);
    }

    new = malloc(sizeof(binary_tree_t));

    new->parent = parent;
    new->n = value;


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
