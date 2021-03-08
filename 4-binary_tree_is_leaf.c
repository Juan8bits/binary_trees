#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: Pointer to the new node or NULL if failure.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
