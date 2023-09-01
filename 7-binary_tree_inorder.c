#include "binary_trees.h"

/**
 * binary_tree_inorder - prototype function for tree in-order calling
 * @tree: variable for pointer to root node
 * @func: variable to call on tree node's data
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if tree doesn't exist and return*/
	if (!func || !tree)
		return;

	/*process for in-order if tree already exist*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
