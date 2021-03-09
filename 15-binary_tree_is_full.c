#include "binary_trees.h"
/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: Is a pointer to the root node or any other node.
 * Return: if tree is full return 1 otherwise return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
