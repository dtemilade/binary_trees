#include "binary_trees.h"

/**
 * binary_tree_depth - prototype function to gets the depth of a node
 * @tree: variable for root node
 * Return: 0 on failure or NULL, the representing depth on success.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*Introducing variable parameter*/
	size_t depth;

	/*Assign values to variable parameters*/
	depth = 0;

	/*Condition to return 0 or NULL*/
	if (!tree)
		return (0);

	/*process to gets the depth of a binary tree*/
	if (tree->parent)
		depth = depth + 1 + binary_tree_depth(tree->parent);
	return (depth);
}
