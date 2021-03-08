#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node.
 * @parent: Pointer to the parent node.
 * @value: Is the value to put in the new node.
 * Return: Pointer to the new node or NULL if failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *primary;
	binary_tree_t *second;

	if (!parent)
		return (NULL);
	primary = binary_tree_node(parent, value);
	if (!primary)
		return (NULL);

	if (!parent->left)
	{
		parent->left = primary;
		return (primary);
	}
	second = parent->left;
	second->parent = primary;
	parent->left = primary;
	primary->left = second;
	return (primary);
}
