// Modify Programming Project 11 from Chapter 7 so that the program labels its
// output:
// Enter a first and last name: Lloyd Fosdick
// You entered the name: Fosdick, L.
// The program will need to store the last name (but not the first name) in an
// array of characters until it can be printed. You may assume that the last
// name is no more than 20 characters long.
//
// ORIGINAL:
// Write a program that takes a first name and last name entered by the user and
// displays the last name, a comma, and the first initial, followed by a period:
//
// Enter a first and last name: LLoyd Fosdisk
// Fosdisk, L.

#include<stdio.h>

#define LENGTH 20

int main(void)
{
	char initial;
	char surname[LENGTH];

	// Get first initial
	printf("Enter a first and last name: ");
	fflush(stdout);
	initial = getchar();

	// Discard rest of first name
	while(getchar() != ' ')
		;

	// Get last name
	for (int i = 0; i < LENGTH; ++i) {
		if ((surname[i] = getchar()) == '\n')
			break;
	}

	// Print surname and initial
	for (int i = 0; i < LENGTH; ++i) {
		if ((surname[i] == '\n'))
			break;
		putchar(surname[i]);
	}
	printf(", %c.\n", initial);

	return 0;
}
