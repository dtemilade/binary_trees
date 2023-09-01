#include "binary_trees.h"

/**
 * binary_tree_is_root - prototype function that checks if a node is a root
 * @node: variable for nodes
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*Conditional statement to check for root*/
	if (node && !node->parent)
		return (1);
	return (0);
}
