#include "binary_trees.h"
/**
 * Depth - Function that measures the depth of a node in
 * a binary tree
 * @tree: Is a pointer to the node to measure the depth.
 * Return: Level of tree.
 */
size_t Depth(const binary_tree_t *tree)
{
	size_t c;

	if (!tree)
		return (0);
	for (c = 0; tree; c++)
		tree = tree->left;
	return (c);
}
/**
 * is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Parent node.
 * @d: tree depth.
 * @level: Current level.
 * Return: 1 or 0.
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - Function that say if a binary tree is perfect.
 * @tree: Is a pointer to the root node or any other node.
 * Return: 1 if it´s perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leng;

	if (!tree)
		return (0);

	leng = Depth(tree);
	return (is_perfect(tree, leng, 0));
}
