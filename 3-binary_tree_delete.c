#include "binary_trees.h"

/**
 * binary_tree_delete - prototype function that deletes an entire binary tree
 * @tree: variable for binary tree
 * Returns: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*Check if tree doesn't exist and return*/
	if (!tree)
		return;

	/*Delete if tree already exist*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
