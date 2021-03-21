// Modify Programming Project 6 from Chapter 3 so that the user may add,
// subtract, multiply or divide two fractions (by entering either +, -, *, or /
// between the fractions).
//
// ORIGINAL:
// Modify the addfrac.c program of Section 3.2 so that the user enters both
// fractions at the same time, separated by a plus sign:
//
// Enter two fractions separated by a plus sign: 5/6+3/4
// The sum is 38/24

#include<stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char frac_operator;

	printf("Enter two fractions separated by an operator: ");
	scanf("%d /%d %c%d /%d", &num1, &denom1, &frac_operator, &num2, &denom2);

	// Ensure valid operator
	while(frac_operator != '+' && frac_operator != '-' && frac_operator != '*' && frac_operator != '/') {
		printf("'%c' is not a valid operator. Please enter either +, -, * or / :", frac_operator);
		scanf("%c", &frac_operator);
	}
	
	// Give fractions the same denominator
	result_denom = denom1 * denom2;
	num1 *= denom2;
	num2 *= denom1;

	// Apply user speicified operator
	switch (frac_operator) {
		case '+':
			result_num = num1 + num2;
			break;
		case '-':
			result_num = num1 - num2;
			break;
		case '*':
			result_num = num1 * num2;
			break;
		case '/':
			result_num = num1 / num2;
			break;
	}

	printf("The result is %d/%d\n", result_num, result_denom);

	return 0;
}
