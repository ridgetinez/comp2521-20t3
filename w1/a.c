#include <stdio.h>

int main(void) {
    int x, y;
    char *c, *d, *e, *f;

    char *myOwnC[2] = {"a", "b"};

    x = (y = 2);
    // x = 2, y = 2;
    c = d = "abc";
    // pointer = memory location
    // printf("%p: %c, %p: %c\n", c, *c, d, *d);

    e = "xyz"; f = "xyz";
    // printf("%p: %c, %p: %c\n", e, *e, f, *f);

    // x = 2, y = 2
    x++;
    // x = 3, y = 2


    // *c = 'A';
    *myOwnC = 'A';

    /*
          .rodata = "abc" "xyz"
    [code|data..heap|stack]
                     read/write
                     */
}