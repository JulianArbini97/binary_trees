#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

    binary_tree_t *right_child;

    right_child = malloc(sizeof(binary_tree_t));

    if (right_child == NULL)
    {
	return (NULL);
    }

    right_child->n = value;
    right_child->parent = parent;
    right_child->left = NULL;
    right_child->right = NULL;

    if (parent == NULL)
    {
        free(right_child);
	    return (NULL);
    }

    if (parent->right != NULL)
    {
        right_child->right = parent->right;
        right_child->right->parent = right_child;
    }

    parent->right = right_child;
    return (right_child);
}
