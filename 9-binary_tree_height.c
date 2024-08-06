#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_time;
	size_t right_time;

	if (tree == NULL)
		return (0);
	left_time = binary_tree_height(tree->left);
	right_time = binary_tree_height(tree->right);


	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return ((left_time > right_time ? left_time : right_time) + 1);
}
