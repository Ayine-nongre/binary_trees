#include <stdio.h>
#include <stdlib.h>
/**
 * code Description - A function that inserts a node as the left-child
 of another node
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
/**A function that creates the binary tree node**/
binary_tree_t *binary_tree_new( int value)
{
	binary_tree_t new_node;
	/**Allocate memory for the new_node**/
	new_node = malloc(sizeof(binary_tree_t));
	/**Check if the memory allocation failed**/
	if (!new_node)
	{
		return (NULL);
	}
	/**value of the new node to the provided integer node**/
	new_node->value = value;
	/**The pointer is initially empty and node has no left child**/
	new_node->left = NULL;
	/**The pointer is initialy empty and node has no left child**/
	new_node->right = NULL;
	return (new_node);
}
/**A function that inserts a node as the left-child of another**/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/**Checks if the parent node is null**/
	if (!parent)
	{
		return (NULL);
	}
	new_node = binary_tree_new(value);
	/**Checks if the creation of the new node failed**/
	if (!new_node)
	{
		return (NULL);
	}
	/**checks if the parent has an existing left node**/
	if (!parent->left)
	{
	/**assigns the existing left node to the new pointer**/
		new_node->left = parent->left;
	/**new_node takes place of the previous left child**/
		parent->left = new_node;
	}
	else
	{
	/**If there was no existing left node**/
		parent->new_node = new_node;
	}
}
