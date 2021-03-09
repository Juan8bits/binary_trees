#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the depth of a node in
 * a binary tree
 * @tree: Is a pointer to the node to measure the depth.
 * Return: Level of tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t c;

	if (!tree)
		return (0);
	for (c = 0; tree->parent; c++)
		tree = tree->parent;
	return (c);
}
