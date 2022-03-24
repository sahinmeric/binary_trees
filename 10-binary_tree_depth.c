#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);

	tree = tree->parent;

	while (tree != NULL)
	{
		tree = tree->parent;
		height += 1;
	}
	return (height);
}
