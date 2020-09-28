#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

struct branch {
	int key;
	Tree left;
	Tree right;
};

Tree nonEmptyTree(int key, Tree left, Tree right) {
    Tree t = malloc(sizeof(struct branch));
    t->key = key;
    t->left = left;
    t->right = right;
    return t;
}

Tree emptyTree() {
    return NULL;
}

void freeTree(Tree t) {
    if (t != NULL) {
        freeTree(t->left);
        freeTree(t->right);
        free(t);
    }
}

    // The way I like to implement recursion a la 'wishful thinking'
    // Imagine our function already works on the smaller trees to the left and right.
    // I'm on a node above them, i've got a tree to my left and a tree to my right.
    // Using countNodes, what do I return back to the user that called me?
    /*
                [v]
               /   \ . numNodesRight
        subtreel . subtreer
    */

int countNodes(Tree t) {
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

/*
            [v]
        /   \ . height(r)
    subtreel . subtreer
*/
int height(Tree t) {
    return 0;
}

// Returns depth of node with key
    /*
                [v] .   v < key, v > key, v == key
               /   \ . 
        subtreel . subtreer
    */
int nodeDepth(Tree t, int key) {
    return -1;
}  

// Challenge: Try and use this helper function signature to create an O(N) algo to solve it :)
void nthSmallestHelper(Tree t, int n, int *nvisited, int *res) {
    return;
}

int nthSmallest(Tree t, int n) {
    return -1;
}