// Condense the fact function in the same way we condensed power.

#include<stdio.h>

int fact(int n)
{
	return n <=1 ? 1 : n * fact(n-1);
}

int main(void)
{
	int user_input, factorial;
	printf("Please enter a number: ");
	fflush(stdout);
	scanf("%d", &user_input);

	factorial = fact(user_input);
	printf("The factorial of %d is %d.\n", user_input, factorial);

	return 0;
}
