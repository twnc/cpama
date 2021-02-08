// Modify hte program of Programming Project 5 so that the polynomial is evaluated 
// using the following formula:
// ((((3x + 2)x - 5)x - 1)x + 7)x - 6
// Note that the modified program performs fewer multiplications. This technique 
// for evaluating polynoials is known as Homer's Rule.
#include<stdio.h>

int main(void)
{
	int x;
	printf("Please enter a value for x: ");
	scanf("%d", &x);

	int answer = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d\n", answer);

	return 0;
}
