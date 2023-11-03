#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL if node is NULL or parent is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	uncle = node->parent->parent;
	if (uncle == NULL)
		return (NULL);
	if (uncle->left == node->parent)
		uncle = uncle->right;
	else
		uncle = uncle->left;
	return (uncle);
}
