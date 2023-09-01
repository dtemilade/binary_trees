#include "binary_trees.h"

/**
 * binary_tree_insert_left - A prototype function that inserts a node as the left-child.
 * @parent: Variable for pointer to a node to insert the left child in.
 * @value: Variable for value to store in the node.
 * Return: Variable for pointer to created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	/*Process to return new node*/
	retval->n = value;
	retval->parent = parent;
	retval->left = NULL;
	retval->right = NULL;

	if (parent->left != NULL)
	{
		retval->left = parent->left;
		retval->left->parent = retval;
	}

	parent->left = retval;
	return (retval);
}
