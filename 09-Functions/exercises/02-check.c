// Write a function check (x, y, n) that returns 1 if both x and y fall between
// 0 and n - 1, inclusive. The function should return 0 otherwise. Assume that
// x, y, and n are all of type int.

#include<stdio.h>

int check(int x, int y, int n)
{
	if ((x >= 0 && x < n) && (y >= 0 && y < n))
		return 1;
	else
		return 0;
}

int main(void)
{
	int range, a, b;

	printf("Please enter the length of an array:\n");
	scanf("%d", &range);

	printf("Please enter two numbers to see if they are valid elements of the array:\n");
	scanf("%d%d", &a, &b);

	if (check(a, b, range))
		printf("Both %d and %d are valid elements.\n", a, b);
	else
		printf("Either %d, %d, or both are invalid elements of the array.\n", a, b);

	return 0;
}
