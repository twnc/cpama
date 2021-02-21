// What is the value of each of the following expressions in C99? (Give all
// possible values if an expression may have more than one value.)
#include<stdio.h>

int main(void) {
	// (a) 8 / 5
	printf("%d\n", 8 / 5);
	// Answer: 1

	// (b) -8 / 5
	printf("%d\n", -8 / 5);
	// Answer: -1

	// (c) 8 / -5
	printf("%d\n", 8 / -5);
	// Answer: -1

	// (d) -8 / -5
	printf("%d\n", -8 / -5);
	// Answer: 1

	return 0;
}

// TEST RESULTS:
// Compiled on MacOS and Linux with gcc and clang with -std=c99 -pedantic and
// all compiled fine and all gave the same results: 1 -1 -1 1
