#include "binary_trees.h"

/**
 * binary_tree_balance - Prototype to measure balance factor of a binary tree
 * @tree: Pointer to root node
 * Return: The balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
/*Introducing variable parameters*/
size_t left_height;
size_t right_height;

/*Assign values to variable parameters*/
left_height = 0;
right_height = 0;

/*Condition to return 0 or NULL*/
if (!tree)
return (0);

/*process to return balance factor*/
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
