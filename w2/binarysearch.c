#include <stdio.h>
#include <stdlib.h>

// precondition: A is an n long, sorted array.
// postcondition: if value is in A, return its index in A.
// Q: Why might this signature be inappropriate for a recursive binary_search?
int binary_search(int A[], int n, int value)
{
	int lo = 0;
	int hi = n - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
        printf("%d %d A[%d]=%d\n", lo, hi, mid, A[mid]);
		
		if (A[mid] == value) {
			return mid;
		} else if (value < A[mid]) {
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char **argv)
{
    int *arr = calloc(argc-1, sizeof(int));
    if (arr == NULL) {
        fprintf(stderr, "bs: couldn't allocate enough space for int array");
        return 1;
    }

    // transform the numbers in string rep. to integers and store in the int array
    for (int i = 1; i < argc; i++) {    
        arr[i-1] = atoi(argv[i]);
    }

    // assuming that the user inputted a sorted array, we'll arbitrarily just search for 5.
    printf("Index of 5 is %d\n", binary_search(arr, argc-1, 5));
    // printf("Index of 5 is %d\n", binary_search_rec(arr, 0, argc-1, 5));
}