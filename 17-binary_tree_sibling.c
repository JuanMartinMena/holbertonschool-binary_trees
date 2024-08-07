#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (parent->left == node)
		return parent->right;
	else if (parent->right == node)
		return (parent->left);
	return (NULL);
}
