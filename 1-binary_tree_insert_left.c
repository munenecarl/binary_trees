#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}
	new_node->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		return (new_node);
	}
	temp = parent->left;
	parent->left = new_node;
	new_node->left = temp;
	temp->parent = new_node;
	return (new_node);	
}
