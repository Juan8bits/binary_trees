#include "binary_trees.h"

/**
 * balance - Functiont that computes a delta for left and right.
 * @left: levels in left.
 * @right: levels in right branch.
 * Return: side with more siblings.
 */
int balance(int left, int right)
{
	return (right - left);
}

/**
 * find_height_left - Recursive function that count returns the length
 * of the longest branch (left) of a tree
 * @tree: Parent node.
 * Return: Heigth of single nodes plus one.
 */
int find_height_left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (find_height_left(tree->left), find_height_left(tree->right) + 1);
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
	return (find_height_right(tree->right), find_height_right(tree->left) + 1);
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

	res = balance(find_height_left(tree), find_height_right(tree));
	return (res);
}
