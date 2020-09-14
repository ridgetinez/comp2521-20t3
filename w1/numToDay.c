/* Start everything from scratch so everyone's fine with writing C files from scratch! */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

/*
 * numToDay.c
 * 
 * Take in the day 'number' as a command line argument and output the string representation.
 * 
 * Example:
 *      > ./numToDay 2
 *      "Tue"
 * 
 * Note to self: demonstrate where in memory the container, and the strings are located.
 *
 */

char *numToDay(int n)
{
	assert(0 <= n && n <= 6);
	char *day;
	if (n == 0) {
		day = "Sun";
	} else if (n == 1) {
		day = "Mon";
	} else if (n == 2) {
		day = "Tue";
	} else if (n == 3) {
		day = "Wed";
	} else if (n == 4) {
		day = "Thu";
	} else if (n == 5) {
		day = "Fri";
	} else if (n == 6) {
		day = "Sat";
	}
	return day;
}

int main(int argc, char** argv) {
    printf("%s\n", numToDay(atoi(argv[1])));
}