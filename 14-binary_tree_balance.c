#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - function that measures the balance factor of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree
 */
int height(const binary_tree_t *tree)
{
	int left_value;
	int right_value;

	if (tree == NULL)
		return (0);
	left_value = height(tree->left);
	right_value = height(tree->right);

	return (left_value > right_value ? left_value : right_value) + 1;
}
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_value;
	int right_value;

	if (tree == NULL)
		return (0);
	left_value = height(tree->left);
	right_value = height(tree->right);

	return (left_value - right_value);
}
