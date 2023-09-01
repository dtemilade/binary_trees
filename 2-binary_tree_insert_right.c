#include "binary_trees.h"

/**
 * binary_tree_insert_right - A prototype function that inserts left-child.
 * @parent: Variable for pointer to a node to insert the left child
 * @value: Variable for value to store in the node.
 * Return: Variable for pointer to created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*Introducing variable for new node*/
	binary_tree_t *retval;

	/*Assume memory allocation for the new node*/
	retval = malloc(sizeof(binary_tree_t));

	/*Condition to return NULL*/
	if (value == '\0' || parent == NULL)
		return (NULL);

	if (retval == NULL)
		return (NULL);

	/*Process for new node*/
	retval->n = value;
	retval->parent = parent;
	retval->left = NULL;
	retval->right = NULL;

	if (parent->right != NULL)
	{
		retval->right = parent->right;
		retval->right->parent = retval;
	}

	parent->right = retval;
	return (retval);
}
