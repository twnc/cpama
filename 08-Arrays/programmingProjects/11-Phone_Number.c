// Modify Programming Project 4 from Chapter 7 so that the program labels its
// output:
// Enter phone number: 1-800-COL-LECT
// To numeric form: 1-800-265-5328
// The program will need to store the phone number (either in its original form
// or in its numeric form) in an array of characters until it can be printed.
// You may assume that the phone number is no more than 15 characters long.
//
// ORIGINAL:
// Write a program that translates an alphabetic phone number into numeric form:
// Enter phone number: CALLAT
// 2255288
// (In cases you don't have a telephone nearby, here are the letters on the
// keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the
// original phone number contains nonalphabetic characters (digits or
// punctuation, for example), leave them unchanged:
//
// Enter phone number: 1-800-COL-LECT
// 1-800-265-5328
//
// You may assume that any letters entered by the user are upper case.

#include<stdio.h>
#include<ctype.h>

#define LENGTH 15

int main(void)
{
	printf("Enter phone number: ");
	fflush(stdout);

	char phone_number[LENGTH];
	for (int i = 0; i < LENGTH; ++i) {
		phone_number[i] = toupper(getchar());
		if (phone_number[i] == '\n')
			break;
	}

	printf("To numeric form: ");

	for (int i = 0; i < LENGTH; ++i) {
		if (phone_number[i] == '\n')
			break;
		switch(phone_number[i]) {
		case 'A': case 'B': case 'C':
			printf("2");
			break;
		case 'D': case 'E': case 'F':
			printf("3");
			break;
		case 'G': case 'H': case 'I':
			printf("4");
			break;
		case 'J': case 'K': case 'L':
			printf("5");
			break;
		case 'M': case 'N': case 'O':
			printf("6");
			break;
		case 'P': case 'Q': case 'S':
			printf("7");
			break;
		case 'T': case 'U': case 'V':
			printf("8");
			break;
		case 'W': case 'X': case 'Y':
			printf("9");
			break;
		default:
			printf("%c", phone_number[i]);
			break;
		}
	}
	printf("\n");

	return 0;
}
