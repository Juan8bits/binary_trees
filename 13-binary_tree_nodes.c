#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: Is a pointer to the root node or any other node.
 * Return: Count child of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		c++;
	c += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (c);
}