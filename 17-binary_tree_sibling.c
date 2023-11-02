#include <stdio.h>
#include "binary_trees.h"
/**
 * code description: A function that measures the balance
 * factor of a binary tree
 * @left: A pointer to the left node
 * @right: A pointer to the right node
 **/
struct binary_tree
{
        int n;
	struct binary_tree *parent;
        struct binary_tree *left;
        struct binary_tree *right;
};
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
/**Check if the node is left or right child of its parent**/
	if (node->parent->left == node)
	{
		return (node->parent->left);
	}
	else if (node->parent->right == node)
	{
		return (node->parent->right);
	}
	else
		return (NULL);
}
