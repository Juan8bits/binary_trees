#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node: Is a pointer to the node to find the sibling.
 * Return: If node is NULL or the parent is NULL, return NULL
 * If node has no sibling, return NULL. Otherwise the address of the sibling.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent && node->parent->parent->right)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent && node->parent->parent->left) 
		return (node->parent->parent->left);
	return (NULL);
}
