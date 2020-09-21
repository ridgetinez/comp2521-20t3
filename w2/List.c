#include <stdio.h>
#include <stdlib.h>
#include "List.h"

typedef struct _IntListNodeRep {
    int data;
    struct _IntListNodeRep *next;
} *IntListNode;

struct _IntListWrapperRep {
    int size;
    IntListNode first, last;
};

static IntListNode newIntListNode(int data)
{
    IntListNode newNode = malloc(sizeof(struct _IntListNodeRep));
    if (newNode == NULL) return newNode;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

IntList IntListCreate()
{
    IntList L = malloc(sizeof(struct _IntListWrapperRep));
    if (L == NULL) return L;
    L->size = (int)(L->first = L->last = NULL);
    return L;
}

void IntListAppend(IntList L, int v)
{
    IntListNode newNode = newIntListNode(v);

    if (L->first == NULL) {
        L->first = L->last = newNode;
        L->size++;
    } else {
        L->last->next = newNode;
        L->last = newNode;
    }
}

int IntListSumIter(IntList L)
{
    return 0; 
}

static bool IntListIsSortedHelper(IntListNode l)
{
    // Implement me :)
    return false;
}

bool IntListIsSorted(IntList L)
{
    return IntListIsSortedHelper(L->first);
}

// Define the solution of the function with respect to itself.
static int IntListSumRecHelper(IntListNode l) 
{
    if (l == NULL) return 0;
    return l->data + IntListSumRecHelper(l->next);

    // BASE CASE:
    // X
    // IntListSum(X) = 0
    // [2] -> X

    // RECURSIVE CASE:
    // IntListSum(listNode) = firstNodeValue + IntListSum(nextNodeInTheList)
    // IntListSum(listNode) = 2              + IntListSum([3]..)
    // IntListSum(listNode) = listNode->data + IntListSum(listNode->next)

    // IntListSum(listNode) = 2              + IntListSum(X)
    // IntListSum(listNode) = 2              + 0
    // IntListSum(listNode) = 2  
} 

int IntListSumRec(IntList L)
{ 
    return IntListSumRecHelper(L->first);
}

void IntListInsertNth(IntList L, int v, int pos)
{
    /* Todo in tutorial :) */
}