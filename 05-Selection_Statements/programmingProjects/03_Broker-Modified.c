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
// Enter the number of shares you would like to purchase: 3000
// Enter the price per share: 10
// Commission: $166.00
// Rival's commission: $93.00

#include<stdio.h>

int main(void)
{
	float commission, value, price_per_share, rival_commission;
	int number_of_shares;

	printf("Enter the number of shares you would like to purchase: ");
	scanf("%d", &number_of_shares);
	printf("Enter the price per share: ");
	scanf("%f", &price_per_share);
	value = price_per_share * number_of_shares;

	// Calculate commission
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

	// Calculate rival's commission
	if(number_of_shares < 2000)
		rival_commission = 33.00f + 0.03f * number_of_shares;
	else
		rival_commission = 33.00f + 0.02f * number_of_shares;

	printf("Commission:\t\t$%.2f\n", commission);
	printf("Rival's commission:\t$%.2f\n", rival_commission);

	return 0;
}
