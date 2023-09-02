#include "binary_trees.h"

/**
 * binary_tree_is_perfect - prototype to checks if a binary tree is perfect.
 * @tree: Variable for pointer to the root node.
 * Return: 0 if tree is NULL otherwise 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{

/*Condition to return 0 or NULL*/
if (!tree)
return (0);

/*process to return result*/
if ((binary_tree_balance(tree) == 0) && (binary_tree_is_full(tree) == 1))
	return (1);
return (0);
}


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
/**
 * binary_tree_height - prototype function to gets the height of a binary tree
 * @tree: variable for root node to draw height from for tree
 * Return: 0 on failure or NULL, the representing height on success.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	/*Introducing variable parameters*/
	size_t left_size;
	size_t right_size;

	/*Assign values to variable parameters*/
	left_size = 0;
	right_size = 0;

	/*Condition to return 0 or NULL*/
	if (!tree)
		return (0);

	/*process to gets the height of a binary tree*/
	left_size = binary_tree_height(tree->left);
	right_size = binary_tree_height(tree->right);

	if (left_size > right_size)
		return (left_size + 1);
	else
		return (right_size + 1);
}

/**
 * binary_tree_is_full - A prototype function on if a binary tree is full
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
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
