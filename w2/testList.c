#include <stdio.h>
#include "List.h"

int main(void)
{
    // [1 2 3]
    IntList L1 = IntListCreate();
    IntListAppend(L1, 1);
    IntListAppend(L1, 2);
    IntListAppend(L1, 3);
    printf("L1: %d\n", IntListIsSorted(L1)); // true

    // [3 2 1]
    IntList L2 = IntListCreate();
    IntListAppend(L2, 3);
    IntListAppend(L2, 2);
    IntListAppend(L2, 1);
    printf("L2: %d\n", IntListIsSorted(L2)); // false

    // [15 15]
    IntList L3 = IntListCreate();
    IntListAppend(L3, 15);
    IntListAppend(L3, 15);
    printf("L3: %d\n", IntListIsSorted(L3)); // true

    // [1 3 2 1]
    IntList L4 = IntListCreate();
    IntListAppend(L4, 1);
    IntListAppend(L4, 3);
    IntListAppend(L4, 2);
    IntListAppend(L4, 1);
    printf("L4: %d\n", IntListIsSorted(L4)); // false
}