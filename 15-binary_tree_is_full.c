#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * is_full - function that checks if the node is full
 *
 * @node: node to be checked
 *
 * Return: node checked
 */
int is_full(const binary_tree_t *node)
{
	if (node == NULL)
		return (1);
	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left != NULL && node->right != NULL)
		return (is_full(node->left) && is_full(node->right));
	return (0);
}
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if fail, 1 on succes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full(tree));
}
