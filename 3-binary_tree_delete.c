#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree.
 * @tree: Is a pointer to the root node of the tree to delete.
 * Return:
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	free(tree);
}
