#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Pointer to the node to check.
 * Return: Pointer to the new node or NULL if failure.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
