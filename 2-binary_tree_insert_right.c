#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: pointer to the parent node
 * @value: value to insert to the new node
 * Return: the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);
	if (!parent)
	{
		free(new);
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;
	return (new);
}
