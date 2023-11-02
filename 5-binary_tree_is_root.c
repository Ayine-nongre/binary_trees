#include <stdio.h>
#include <stdlib.h>
/**
 * code Description - A function that inserts a node as the left-child of another node
 * @parent: parent noode
 * @value: The value stored in the node
 * @left: Left node
 * @Right: Right node
**/
/**Define the structure for the binary node**/
typedef struct binary_tree
{
        /**stores the value of the node**/
        int value;
        struct binary_tree *parent;
        /**pointer pointing to the left child**/
        struct binary_tree *left;
        /**pointer to the right child**/
        struct binary_tree *right;
} binary_tree_t;
/**A function that deletes the entire binary tree node**/
int binary_tree_is_root(const binary_tree_t *node)
{
     /**check if node is NULL**/
     if (!node)
     {
        return (0);
     }

     if (node->parent == NULL)
     {
        return (0);
     }
     else
     {
        return (1);
     }
}

