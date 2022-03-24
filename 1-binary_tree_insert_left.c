#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: pointer to the parent node
 * @value: value of the new node
 * Return: the new node or NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
