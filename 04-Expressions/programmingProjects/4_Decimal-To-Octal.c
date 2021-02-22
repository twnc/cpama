// Write a program that reads an integer entered by the user and displays it in
// octal (base 8):
//
// Enter a number between 0 and 32767: 1953
// In octal, your number is: 03641
//
// The output should be displayed using five digits, even if few digits are
// sufficient. Hint: ADD LATER

#include<stdio.h>

int main(void)
{
	int decimal_number, octal_number;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &decimal_number);
	octal_number =  (decimal_number/1         % 8 * 1);
	octal_number += (decimal_number/8         % 8 * 10);
	octal_number += (decimal_number/(8*8)     % 8 * 100);
	octal_number += (decimal_number/(8*8*8)   % 8 * 1000);
	octal_number += (decimal_number/(8*8*8*8) % 8 * 10000);
	printf("In octal, your number is: %.5d\n", octal_number);

	return 0;
}
