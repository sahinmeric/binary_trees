#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * traversal
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
