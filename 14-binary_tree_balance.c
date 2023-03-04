#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: If tree is NULL, must return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (0);

	lheight = tree->left ? (int)binary_tree_height(tree->left) : -1;
	rheight = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (lheight - rheight);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: height of tree
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	lheight = rheight = 0;

	if (!tree)
		return (0);

	lheight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rheight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lheight > rheight ? lheight : rheight);
}
