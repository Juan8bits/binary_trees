#include "binary_trees.h"
/**
 * find_max - Functiont that say if a node exist.
 * @left: number of brothers left.
 * @right: number of brothers right.
 * Return: side with more siblings.
 */
size_t find_max(int left, int right)
{
	if (left >= right)
		return (left);
	return (right);
}

/**
 * find_height - Recursive function that count returns the length
 * of the longest branch of a tree
 * @tree: Parent node.
 * Return: Heigth of single nodes plus one.
 */
size_t find_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_max(find_height(tree->left),
			 find_height(tree->right)) + 1);
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
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (1);
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

	leng = find_height(tree);
	return (is_perfect(tree, leng, 0));
}
