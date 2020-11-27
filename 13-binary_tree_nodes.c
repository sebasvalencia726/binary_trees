#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 1;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
