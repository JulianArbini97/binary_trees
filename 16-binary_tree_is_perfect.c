#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: Something.
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left != NULL && tree->right != NULL) && (binary_tree_height(tree->left) == binary_tree_height(tree->right)))
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_height - function to check the height.
 * @tree: node.
 * Return: number of nodes
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
