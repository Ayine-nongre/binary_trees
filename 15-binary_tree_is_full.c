#include <stdio.h>
#include <stdlib.h>
/**
 * code description: A function that measures the balance
 * factor of a binary tree
 * @left: A pointer to the left node
 * @right: A pointer to the right node
 **/
struct binary_tree
{
        int n;
        struct binary_tree *left;
        struct binary_tree *right;
}
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
/**recursively call the function**/
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);
	return (left_full && right_full);
}
