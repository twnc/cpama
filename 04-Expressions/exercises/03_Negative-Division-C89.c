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
