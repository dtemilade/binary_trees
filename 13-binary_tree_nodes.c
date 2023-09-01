#include "binary_trees.h"

/**
 * binary_tree_nodes - prototype function that counts the nodes in a binary tree
 * @tree: pointer node binary tree
 * Return: Number of nodes in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*introduce variable*/
	size_t count;

/*Assign values*/
count = 0;

/*Condition to return 0 or NULL*/
if (!tree)
return (0);

/*process to return the nodes count*/
if (tree->right || tree->left)
count = count + 1;
count = count + binary_tree_nodes(tree->left);
count = count + binary_tree_nodes(tree->right);
return (count);
}
