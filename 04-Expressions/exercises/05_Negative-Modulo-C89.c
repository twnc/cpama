/*
 * What is the value of each of the following expressions in C89? (Give all
 * possible values if an expression may have more than one value.)
 */
#include<stdio.h>

int main(void)
{
	/* (a)  8 %  5 */
	printf(" 8 %%  5 = %2d\n", 8 % 5);

	/* (b) -8 %  5 */
	printf("-8 %%  5 = %2d\n", -8 % 5);

	/* (c)  8 % -5 */
	printf(" 8 %% -5 = %2d\n", 8 % -5);

	/* (d) -8 % -5 */
	printf("-8 %% -5 = %2d\n", -8 % -5);

	return 0;
}
