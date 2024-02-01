#ifndef B_T_H
#define B_T_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 * @parent: Pointer to the parent node
 * @n: Integer stored in the node
 * @right: Pointer to the right child node
 * @left: Pointer to the left child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/***************/
/* Prototypes */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
