// Write a program that takes a first name and last name entered by the user and
// displays the last name, a comma, and the first initial, followed by a period:
//
// Enter a first and last name: LLoyd Fosdisk
// Fosdisk, L.

#include<stdio.h>

int main(void)
{
	char initial, temp;

	// Get first initial
	printf("Enter a first and last name: ");
	initial = getchar();

	// Discard rest of first name
	while(getchar() != ' ')
		;

	// Print last name as received
	while((temp = getchar()) != '\n') {
		putchar(temp);
	}

	// Print initial
	printf(", %c.\n", initial);

	return 0;
}
