/*
 * File: 7-binary_tree_inorder.c
 * Auth: Lalo Rdz
 */
#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through a binary tree using
 * in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: The value in the node must be passed as a parameter to this
 * function.
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
