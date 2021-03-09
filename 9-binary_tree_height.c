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
 * binary_tree_height - Function that measures the height of a binary tree
 * using in-order traversal.
 * @tree: Is a pointer to the root node or any other node.
 * Return: Heigh of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t res = 0;

	res = find_height(tree);
	if (res == 0)
		return (res);
	return (res - 1);
}
