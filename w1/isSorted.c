#include <stdio.h>
// ^
// printf comes from here

#include <stdlib.h>
// ^
// malloc, free and atoi comes from here

#include <stdbool.h>
// ^
// bool datatype comes from here (true/false)

// Pre:
// - a[] is a valid pointer to the start of an array of ints
// - n is a positive int indicating how many elements in a[]
// Post:
// - return value = a[i] <= a[i + 1] for all i in [0..n - 2]
bool isSorted(int *a, int n)
{
    return true;
}

int main(int argc, char **argv)
{
    int nelem = argc-1;
    int *nums = malloc(nelem * sizeof(int));

    // Not doing any error handling...
    for (int i = 1; i < argc; i++) {
        nums[i-1] = atoi(argv[i]);
    }

    printf("Sorted? %s", isSorted(nums, nelem) ? "yep!" : "nope :(");
    free(nums);
}