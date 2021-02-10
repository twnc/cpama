// Write a program that formats product information entered by the user. A session
// with the program should look like this:
//
// Enter item number: 583
// Enter unit price: 13.5
// Enter purchase date (mm/dd/yyyy) : 10/24/2010
//
// Item 	Unit		Purchase
// 		Price		Date
// 583		$  13.50	10/24/2010
//
// The item number and date should be left justified; the unit price should be right
// justified. Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
#include<stdio.h>

int main(void)
{
	int item_number, purchase_month, purchase_day, purchase_year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	if(unit_price > 9999.99) unit_price = 9999.99;

	printf("Enter purchase date (mm/dd/yyyy) : ");
	scanf("%d /%d /%d", &purchase_month, &purchase_day, &purchase_year);
	printf("\n");

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t", item_number);
	printf("$%7.2f\t", unit_price);
	printf("%d/%d/%d\n", purchase_month, purchase_day, purchase_year);

	return 0;
}
