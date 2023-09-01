#include "binary_trees.h"

/**
 * binary_tree_leaves - prototype that counts the leaves in a binary tree
 * @tree: pointer node binary tree
 * Return: Number the leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*Introducing variable parameter*/
	size_t count;

	/*Assign value to variable parameter*/
	count = 0;

	/*Condition to return 0 or NULL*/
	if (!tree)
		return (0);

	/*process to return the leaves count*/
	if (!tree->right && !tree->left)
		count = count + 1;
	count = count + binary_tree_leaves(tree->left);
	count = count + binary_tree_leaves(tree->right);
	return (count);
}
