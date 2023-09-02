#include "binary_trees.h"

/**
 * binary_tree_sibling - A prototype function that finds the sibling of a node.
 * @node: pointer node to find sibling.
 * Return: NULL if node or parent is NULL, otherwise sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
/*Condition to return 0 or NULL*/
if (!node || !node->parent)
return (NULL);

/*process to return result*/
if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
