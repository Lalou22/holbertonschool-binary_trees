/*
 * File: 5-binary_tree_is_root.c
 * Auth: Lalo Rdz
 */
#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if node is a root, and 0 otherwise. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
