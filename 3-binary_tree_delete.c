#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * code Description - A function that inserts a node as the left-child of another node
 * @value: The value stored in the node
 * @left: Left node
 * @Right: Right node
**/

/**A function that deletes the entire binary tree node**/
void binary_tree_delete(binary_tree_t *tree)
{
/**Check if the tree is null**/
        if (tree->left != NULL && tree->right != NULL)
        {
        /**Deleting left and right trees**/
            binary_tree_delete(tree->left);
            binary_tree_delete(tree->right);
            free(tree);
            return;
        }
        if (tree->left != NULL && tree->right == NULL)
        {
            binary_tree_delete(tree->left);
            free(tree);
            return;
        }
        if (tree->right != NULL && tree->left == NULL)
        {
            binary_tree_delete(tree->right);
            free(tree);
            return;
        }
        if (tree->right == NULL && tree->left == NULL)
        {
            free(tree);
            return;
        }
}
