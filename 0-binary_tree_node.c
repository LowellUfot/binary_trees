#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: pointer to new binary tree node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode =
		malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return NULL;

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (newNode->parent == NULL) /*newNode is root*/
		return newNode;
	if (parent->n > newNode->n)
		parent->left = newNode;
	else
		parent->right = newNode;

	return (newNode);
}
