// Write a function that computes the value of the following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
// Write a program that asks the user to enter a value for x, calls the function
// to compute the value of the polynomial, and then displays the value returned
// by the function.

#include<stdio.h>

int pow(int number, int power);
int polynomial(int x);

int main(void)
{
	int user_input;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Please enter the value of x:\n");
	scanf("%d", &user_input);
	printf("%d\n", polynomial(user_input));
	return 0;
}

int pow(int number, int power) {
	if(power <= 0)
		return 1;
	else
		return number * pow(number, --power);
}
int polynomial(int x)
{
	int answer = (3 * pow(x,5)) + (2 * pow(x,4)) - (5 * pow(x,3)) - pow(x,2) + (7 * x) - 6;
	return answer;
}
