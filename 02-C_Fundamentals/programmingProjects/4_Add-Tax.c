// Write a program that asks the user to enter a dollars-and-cents amount, then 
// displays the amount with 5% tax added:
// Enter an amount: 100.00
// With tax added: $105.00
#include<stdio.h>

int main(void)
{
	float money;
	float taxRate = 1.05f;

	printf("Enter an amount: ");
	scanf("%f", &money);
	printf("With tax added: $%.2f\n", money * taxRate);

	return 0;
}
