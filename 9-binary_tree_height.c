#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    int left_side = 0;
    int right_side = 0;

	if (tree == NULL)
    {
		return (0);
    }
    if (tree->left != NULL || tree->right != NULL)
	{
		left_side = binary_tree_height(tree->left);
		right_side = binary_tree_height(tree->right);
		return (1 + (left_side > right_side ? left_side : right_side));
	}
	return (0);
}