#include "binary_trees.h"

/**
 * binary_tree_nodes - function to check the nodes.
 * @tree: node.
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
size_t count2 = 0;

if (tree == NULL)
{
return (0);
}

if (tree->left != NULL || tree->right != NULL)
{
count = binary_tree_nodes(tree->left);
count2 = binary_tree_nodes(tree->right);
return (1 + count + count2);
}

return (0);
}
