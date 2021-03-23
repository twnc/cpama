// Write a program that evaluates an expression:
// Enter an expression: 1+2.5*3
// Value of expression: 10.5
// The operands in the expression are floating-point numbers; the operators are
// +, -, *, and /. The expression is evaluated from left to right (no operator
// takes precedence over any other operator).

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	float val1, val2, val3, result;
	char operator1, operator2;
	bool valid_expression = true;

	printf("Enter an expression: ");
	scanf("%f %c%f %c%f", &val1, &operator1, &val2, &operator2, &val3);

	result = val1;
	switch(operator1) {
		case '+':
			result += val2;
			break;
		case '-':
			result -= val2;
			break;
		case '*':
			result *= val2;
			break;
		case '/':
			result /= val2;
			break;
		default:
			valid_expression = false;
			break;
	}
	switch(operator2) {
		case '+':
			result += val3;
			break;
		case '-':
			result -= val3;
			break;
		case '*':
			result *= val3;
			break;
		case '/':
			result /= val3;
			break;
		default:
			valid_expression = false;
			break;
	}


	if(valid_expression)
		printf("Value of expression: %g\n", result);
	else
		printf("Invalid expression.\n");

	return 0;
}
