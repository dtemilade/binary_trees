#include "binary_trees.h"

/**
 * binary_tree_size - prototype function for size of a binary tree
 * @tree: variable for binary tree pointer
 * Return: return 0 If tree is NULL, otherwise size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/*Introducing variable parameter*/
	size_t retsize;

	/*Assign value to variable parameter*/
	retsize = 1;

	/*Condition to return 0 or NULL*/
	if (!tree)
		return (0);

	/*process to return size measured*/
	retsize = retsize + binary_tree_size(tree->left);
	retsize = retsize + binary_tree_size(tree->right);
	return (retsize);
}
