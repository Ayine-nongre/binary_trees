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
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	if (tree == NULL)
		return (0);
	left_height = binary_tree_is_perfect(tree->left);
	right_height = binary_tree_is_perfect(tree->right);
	return + 1(left_height > right_height ? left_height : right_height);
}
