// Write the following function
// double inner_product(double a[], double b[], int n);
// The function should return  a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]
#include<stdio.h>
#define SIZE ((int) (sizeof(a1)/sizeof(a1[0])))

double inner_product(double a[], double b[], int n);

int main(void)
{
	double a1[] = {1, 7, 3, 12, 6};
	double a2[SIZE] = {3, 2, 7, 8, 9};

	for(int i = 0; i < SIZE; ++i)
		printf("%g ", a1[i]);
	putchar('\n');

	for(int i = 0; i < SIZE; ++i)
		printf("%g ", a2[i]);
	putchar('\n');

	printf("The inner product of these two arrays is: %lf\n", inner_product(a1, a2, SIZE));

	return 0;
}

double inner_product(double a[], double b[], int n)
{
	double result = 0;
	for (int i = 0; i < n; ++i)
		result += a[i] * b[i];
	return result;
}
