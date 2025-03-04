/*
 * File: 4-binary_tree_is_leaf.c
 * Auth: Lalo Rdz
 */
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a leaf, and 0 otherwise. If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
