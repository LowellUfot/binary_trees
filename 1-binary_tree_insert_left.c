#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or
 * NULL on failure or if parent is NULL.
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode =
		malloc(sizeof(binary_tree_t));
	binary_tree_t *leftNode;

	if (tempNode == NULL)
		return (NULL);

	tempNode->n = value;
	tempNode->left = tempNode->right = NULL;
	tempNode->parent = parent;
	if (parent == NULL)
		return (NULL);

	leftNode = parent->left;
	if (parent->left == NULL)
	{
		parent->left = tempNode;
	}
	else
	{
		parent->left = tempNode;
		tempNode->left = leftNode;
		leftNode->parent = tempNode;
	}

	return (tempNode);
}
