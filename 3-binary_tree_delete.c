/*
 * File: 3-binary_tree_delete.c
 * Auth: Lalo Rdz
 */
#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to delete.
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
