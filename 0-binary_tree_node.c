#include "binary_trees.h"

/**
 * binary_tree_node - prototype function that creates a binary tree node
 * @parent: variable for pointer parent binary trees
 * @value: variable for value new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Introducing variable for new node*/
	binary_tree_t *retval;

	/*Assume memory allocation for the new node*/
	retval = malloc(sizeof(binary_tree_t));

	/*Condition to return NULL*/
	if (value == '\0')
		return (NULL);

	if (retval == NULL)
		return (NULL);

	/*Process to return new node*/
	retval->n = value;
	retval->parent = parent;
	retval->left = NULL;
	retval->right = NULL;

	return (retval);
}
