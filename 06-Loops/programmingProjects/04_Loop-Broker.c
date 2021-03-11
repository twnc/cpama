// Add a loop to the broker.c program of Section 5.2 so that the user can enter
// more than one trade and the program will calculate the commission on each.
// The program should terminate when the user enters 0 as the trade value:
//
// Enter value of trade: 30000
// Commission: $166.00
//
// Enter value of trade: 20000
// Commission: $144.00
//
// Enter value of trade: 0
//
// ORIGNAL: Calculates a broker's commission

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	float commission, value;

	while (true) {
		printf("Enter value of trade: ");
		scanf("%f", &value);
		if (value == 0)
			break;

		if (value < 2500.00f)
			commission = 30.00f + value * .017f;
		else if (value < 6250.00f)
			commission = 56.00f + value * .0066f;
		else if (value < 20000.00f)
			commission = 76.00f + value * .0034f;
		else if (value < 50000.00f)
			commission = 100.00f + value * .0022f;
		else if (value < 500000.00f)
			commission = 155.00f + value * .0011f;
		else
			commission = 255.00f + value * .0009f;

		if (commission < 39.00f)
			commission = 39.00f;

		printf("Commission: $%.2f\n\n", commission);
	}

	return 0;
}
