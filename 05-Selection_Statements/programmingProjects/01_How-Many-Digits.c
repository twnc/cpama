// Write a program that calculates how many digits a number contains:
//
// Enter a number: 374
// The humber 374 has 3 digits
//
// You may assume that the number has no more than four digits. Hint: Use if
// statements to test the number. For example, if the number is between 0 and 9,
// it has one digit. If the number is between 10 and 99, it has two digits.

#include<stdio.h>

int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);

	if(input < 0)
		printf("This program only accepts positive inputs.\n");
	else if (input < 10)
		printf("The number %d has 1 digit.\n", input);
	else if (input < 100)
		printf("The number %d has 2 digits.\n", input);
	else if (input < 1000)
		printf("The number %d has 3 digits.\n", input);
	else if (input < 10000)
		printf("The number %d has 4 digits.\n", input);
	else
		printf("This program only accepts numbers with four digits or less.\n");

	return 0;
}
