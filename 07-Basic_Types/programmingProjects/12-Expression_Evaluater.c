// Write a program that evaluates an expression:
// Enter an expression: 1+2.5*3
// Value of expression: 10.5
// The operands in the expression are floating-point numbers; ther operators are
// +, -, *, and /. The expression is evaluated from left to right (no operator
// takes precedence over any other operator).
#include<stdio.h>

int main(void)
{
	float value, new_number;
	char operator;

	printf("Enter an expression: ");
	fflush(stdout);
	
	scanf("%f", &value);

	// Find first character that isn't whitespace
	while((operator = getchar()) == ' ')
		;

	// Apply operator to next number
	while(operator != '\n') {
		scanf("%f", &new_number);
		switch (operator) {
			case '+': value += new_number; break;
			case '-': value -= new_number; break;
			case '*': value *= new_number; break;
			case '/': value /= new_number; break;
			default: printf("ERROR! Invalid operator\n");
		}
		while((operator = getchar()) == ' ')
			;
	}

	printf("Value of expression: %g\n", value);

	return 0;
}
