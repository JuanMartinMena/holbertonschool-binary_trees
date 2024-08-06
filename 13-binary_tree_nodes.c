#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_nodes - function that counts the nodes
 *
 * @tree: pointer to the root node of the tree to count the nodes
 *
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	i = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	return (i + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
