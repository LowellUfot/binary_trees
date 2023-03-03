#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node, or
 * NULL on failure or if parent is NULL.
 * If parent already has a right-child, the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode =
		malloc(sizeof(binary_tree_t));
	binary_tree_t *rightNode;

	if (tempNode == NULL)
		return (NULL);

	tempNode->n = value;
	tempNode->left = tempNode->right = NULL;
	tempNode->parent = parent;
	if (parent == NULL)
		return (NULL);

	rightNode = parent->right;
	if (parent->right == NULL)
	{
		parent->right = tempNode;
	}
	else
	{
		parent->right = tempNode;
		rightNode->parent = tempNode;
		tempNode->right = rightNode;
	}

	return (tempNode);
}
