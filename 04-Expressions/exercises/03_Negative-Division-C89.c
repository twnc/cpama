/*
 * What is the value of each of the following expressions in C89? (Give all
 * possible values if an expression may have more than one value.)
 */
#include<stdio.h>

int main(void) {
	/* (a) 8 / 5 */
	printf("%d\n", 8 / 5);
	/* Answer: 1 */

	/* (b) -8 / 5 */
	printf("%d\n", -8 / 5);
	/* Answer: -1 or -2 (implementation dependent) */

	/* (c) 8 / -5 */
	printf("%d\n", 8 / -5);
	/* Answer: -1 or -2 (implementation dependent) */

	/* (d) -8 / -5 */
	printf("%d\n", -8 / -5);
	/* Answer: 1 or 2 (implementation dependent) */

	return 0;
}

/*
 * TEST RESULTS
 * Compiled code with clang and gcc with -std=89 on MacOS and Manjaro Linux on a
 * Raspberry Pi. Results on all machines and compilers were 1 -1 -1 1 which
 * matches standardised behaviour for C99 which is interesting. All compilers
 * accepted C99 style commenting except gcc on Linux so I modified the style for
 * compatibility.
 */
