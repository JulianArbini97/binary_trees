#include "binary_trees.h"

/**
 * binary_tree_depth - function to check the height.
 * @tree: node.
 * Return: number of nodes
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
int counter = 0;

if (tree == NULL)
{
return (0);
}

if (tree->parent != NULL)
{
counter = binary_tree_depth(tree->parent);
counter++;
}

return (counter);
}
