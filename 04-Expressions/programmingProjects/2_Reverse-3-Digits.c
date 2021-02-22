// Extend the program in Programming Project 1 to handle three-digit numbers.

#include<stdio.h>

int main(void)
{
	int number;

	printf("Enter a three-digit number: ");
	scanf("%3d", &number);
	printf("The reversal is: %d%d%d\n", number%10, number/10%10, number/100%10);

	return 0;
}
