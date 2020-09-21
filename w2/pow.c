#include <stdio.h>
#include <stdlib.h>

int mypow(int x, unsigned int n)
{
    return 1;
}

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "usage: %s <base> <exponent>", argv[0]);
        return 1;
    }

    // skipping checking whether the provided base and exponents are integers
    printf("%d\n", mypow(atoi(argv[1]), atoi(argv[2])));
}