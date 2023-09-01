#include "binary_trees.h"

/**
 * binary_tree_postorder - prototype function for tree post-order calling
 * @tree: variable pointer to root node
 * @func: variable to call on tree node's data
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if tree doesn't exist and return*/
	if (!func || !tree)
		return;

	/*process for post-order if tree already exist*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
