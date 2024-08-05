#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_root - a function that checks if a node is a leaf
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if its a root or 0 if its not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
