#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_node - function to create a node.
 * @parent: parent node.
 * @value: value of each node's n.
 * Return: number of nodes
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nodo;

nodo = malloc(sizeof(binary_tree_t));
if (nodo == NULL)
{
return (NULL);
}

nodo->n = value;
nodo->parent = parent;
nodo->left = NULL;
nodo->right = NULL;

return (nodo);
}
