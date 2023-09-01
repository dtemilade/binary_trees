#include "binary_trees.h"

/**
 * binary_tree_is_full - A prototype that checks if a binary tree is full.
 * @tree: Variable for pointer to the root node of the tree.
 * Return: 1 if tree is full or 0 in otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
/*Condition to return 0 or NULL*/
if (!tree)
return (0);	

/*process to return result*/
if (!tree->right && !tree->left)
return (1);
if (tree->right && tree->left)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}
