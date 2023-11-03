#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/***
 * code description: a function that inserts a node 
 * as the left-child of another node
 * @value: value stored in the code.
 * @left: A pointer to the left node
 * @right: A pointer to the right node
**/
binary_tree_t *binary_tree_new(int value)
{
/**Allocating memory for the binary tree**/
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
/**check if the memory allocation failed**/
    if (!new_node)
    {
        return (NULL);
    }
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    return (new_node);
}

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
    {
        return (NULL);
    }
    binary_tree_t *new_node = binary_tree_new(value);
    if (!new_node)
    {
        return (NULL);
    }
    new_node->left = parent->left;
    parent->left = new_node;
    return (new_node);
}

