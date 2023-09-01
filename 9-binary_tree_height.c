#include "binary_trees.h"

/**
 * binary_tree_height - prototype function to gets the height of a binary tree
 * @tree: variable for root node to draw height from for tree
 * Return: 0 on failure or NULL, the representing height on success.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Introducing variable parameters*/
	size_t left_size;
	size_t right_size;

	/*Assign values to variable parameters*/
	left_size = 0;
	right_size = 0;

	/*Condition to return 0 or NULL*/
	if (!tree)
		return (0);

	/*process to gets the height of a binary tree*/
	if (tree->left)
		left_size = left_size + 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_size = right_size + 1 + binary_tree_height(tree->right);

	if (left_size < right_size)
		return (right_size);
	else
		return (left_size);
}
