#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
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
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return is_full(tree);
}
