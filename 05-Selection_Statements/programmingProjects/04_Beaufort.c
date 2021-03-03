// Here's a simplified version of the Beaufort scale, which is used to estimate
// wind force:
//
// Speed (knots)	Description
// Less than 1		Calm
// 1-3			Light Air
// 4-27			Breeze
// 28-47		Gale
// 48-63		Storm
// Above 63		Hurricane
//
// Write a program that asks the user to enter a wind speed (in knots), then
// displays the corresponding description.

#include<stdio.h>

int main(void)
{
	int knots;

	printf("Enter a wind speed (in knots): ");
	scanf("%d", &knots);

	if (knots > 63)
		printf("Hurricane\n");
	else if (knots >= 48)
		printf("Storm\n");
	else if (knots >= 28)
		printf("Gale\n");
	else if (knots >= 4)
		printf("Breeze\n");
	else if (knots >= 1)
		printf("Light Air\n");
	else
		printf("Calm\n");

	return 0;
}
