#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: Pointer to the parent node.
 * @value: Is the value to put in the new node.
 * Return: Pointer to the new node or NULL if failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
		return NULL;
	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
