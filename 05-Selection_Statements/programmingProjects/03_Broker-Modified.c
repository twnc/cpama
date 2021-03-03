// Modify the broker.c program of Section 5.2 by making both of the following
// changes:
// (a) Ask the user to enter the number of shares and the price per share,
//     instead of the value of the trade.
// (b) Add statements that compute the commission charged by a rival broker ($33
//     plus 3 cents per share for fewer than 2000 shares; $33 plus 2 cents per
//     share for 2000 shares or more). Display the rival's commission as well as
//     the commission charged by the original broker.
// ORIGINAL:
// Calculates a broker's commission
// Enter value of trade: 30000
// Commission: $166.00
// NEW:
// Enter the number of share you would like to purchase: 3000
// Enter the price per share: 10
// Commission: $166
// Rival's commission: $93

#include<stdio.h>

int main(void)
{
	float commission, value;

	printf("Enter value of trade: ");
	scanf("%f", &value);

	if(value < 2500.00f)
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

	printf("Commission: $%.2f\n", commission);

	return 0;
}
