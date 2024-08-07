#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_sibling -  function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL or has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left == node)
		return parent->right;
	else if (parent->right == node)
		return (parent->left);
	return (NULL);
}
