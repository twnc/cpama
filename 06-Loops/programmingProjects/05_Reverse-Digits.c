// Programming Project 1 in Chapter 4 asked you to write a program that displays
// a two-digit number with its digits reversed. Generalize the program so that
// the number can have one, two, three, or more digits.
// Hint: Use a do loop that repeatedly divides the number by 10, stopping when
// it reaches 0.

#include<stdio.h>

int main(void)
{
	int number, reverse_number = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &number);

	while (number > 0) {
		reverse_number *= 10;
		reverse_number += number % 10;
		number /= 10;
	}

	printf("The reversal is: %d\n", reverse_number);

	return 0;
}
