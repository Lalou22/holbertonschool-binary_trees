/*
 * File: 1-binary_tree_insert_left.c
 * Auth: Lalo Rdz
 */
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the created node, or NULL on failure or if
 * parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_c;

	if (parent == NULL)
		return (NULL);
	left_c = malloc(sizeof(binary_tree_t));
	if (left_c == NULL)
		return (NULL);
	left_c->n = value;
	left_c->parent = parent;
	left_c->left = NULL;
	left_c->right = NULL;

	if (parent->left == NULL)
		parent->left = left_c;
	else
	{
		left_c->left = parent->left;
		parent->left->parent = left_c;
		parent->left = left_c;
	}
	return (left_c);
}
