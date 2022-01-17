// Rewrite the fact function so that it's no longer recursive.

#include<stdio.h>

int fact(int n);

int main(void)
{
	int user_input;
	printf("Please enter an integer:\n");
	scanf("%d", &user_input);

	printf("The factorial of %d is %d.\n", user_input, fact(user_input));

	return 0;
}

int fact(int n)
{
	int result = 1;
	for (int i = 2; i <= n; i++)
		result *= i;

	return result;
}
