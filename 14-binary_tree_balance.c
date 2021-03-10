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
 * find_height_right - Recursive function that count returns the length
 * of the longest branch (right) of a tree
 * @tree: Parent node.
 * Return: Heigth of single nodes plus one.
 */
int find_height_right(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_max(find_height_right(tree->left),
			 find_height_right(tree->right)) + 1);
}
/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: Is a pointer to the root node or any other node.
 * Return: Heigh of binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int res = 0;

	if (!tree)
		return (0);
	res = (find_height_right(tree->left) - find_height_right(tree->right));
	return (res);
}
