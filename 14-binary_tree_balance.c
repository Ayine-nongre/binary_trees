#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance of a tree
 * @tree: tree argument
 * Return: int value
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0, left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	balance = left_side - right_side;
	return (balance);
}
