#ifndef DC_LIBS_BINARY_TREE_H
#define DC_LIBS_BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *left;
    struct node *right;
};

void pre_order(struct node *t);

void init_node(struct node ** new_node, int data);

/////////////////////////////
////          A
////         / \
////        /   \
////       /     \
////      B       C
////     / \     / \
////    D   E   F   G
////           / \
////          H   I
//////////////////////////////

void make_sample_tree(struct node ** root);


#endif //DC_LIBS_BINARY_TREE_H
