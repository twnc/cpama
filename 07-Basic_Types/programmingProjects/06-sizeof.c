// Write a program that prints the values of sizeof(int), sizeof(short),
// sizeof(long), sizeof(float), sizeof(double), and sizeof(long double).

#include<stdio.h>

int main(void)
{
	printf("sizeof(short) = %zd\n", sizeof(short));
	printf("sizeof(int) = %zd\n", sizeof(int));
	printf("sizeof(long) = %zd\n", sizeof(long));
	printf("\n");
	printf("sizeof(float) = %zd\n", sizeof(float));
	printf("sizeof(double) = %zd\n", sizeof(double));
	printf("sizeof(long double) = %zd\n", sizeof(long double));

	return 0;
}
