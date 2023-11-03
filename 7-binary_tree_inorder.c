#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * code description: a function that goes through a binary 
 * tree using in-order traversal
 * @right: Representing the right node
 * @left: Representing the left node
 * @item: Number of items in the node
 **/
/**Defining a structure for the node binary tree**/
struct node
{
	int n;
	struct node *left;
	struct node *right;
};
/**
 * @tree: A pointer to the root node
 * @func: A pointer to a function
 * Return: nothing
 **/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
