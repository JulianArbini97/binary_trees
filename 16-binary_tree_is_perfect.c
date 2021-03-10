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

	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0 && (binary_tree_height(tree->left) == binary_tree_height(tree->right)))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - function to check if tree is full.
 * @tree: node.
 * Return: number of nodes
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
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
