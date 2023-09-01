#include "binary_trees.h"

/**
 * binary_tree_preorder - prototype function for tree pre-order calling.
 * @tree: variable for pointer to root node
 * @func: variable to call on tree node's data.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if tree doesn't exist and return*/
	if (!func || !tree)
		return;

	/*process for pre-order if tree already exist*/
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

