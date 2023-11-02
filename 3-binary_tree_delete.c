#include <stdio.h>
#include <stdlib.h>
/**
 * code Description - A function that inserts a node as the left-child of another node
 * @value: The value stored in the node
 * @left: Left node
 * @Right: Right node
**/
/**Define the structure for the binary node**/
typedef struct binary_tree
{
/**stores the value of the node**/
        int value;
/**pointer pointing to the left child**/
        struct binary_tree *left;
/**pointer to the right child**/
        struct binary_tree *right;
} binary_tree_t;
/**A function that deletes the entire binary tree node**/
void binary_tree_delete(binary_tree_t *tree)
{
/**Check if the tree is null**/
        if (!tree)
        {
            return;
        }
/**Deleting left and right trees**/
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);
}

