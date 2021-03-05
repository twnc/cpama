// Write a program that prommpts the user to enter two dates and then indicates
// which date comes earlier on the calender:
//
// Enter first date (mm/dd/yy): 3/6/08
// Enter second date (mm/dd/yy): 5/17/07
// 5/17/07 is earlier than 3/6/08

#include<stdio.h>

int main(void)
{
	int earlier_date, later_date, temp_date;

	// Store date as integer in the form yymmdd so that dates can be
	// compared like normal numbers. This format also allows them to be
	// split up with divides and modulos.
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d", &temp_date);
	earlier_date = temp_date * 100;
	scanf(" /%d /", &temp_date);
	earlier_date += temp_date;
	scanf("%d", &temp_date);
	earlier_date += temp_date * 10000;

	// Store second date in same format
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d", &temp_date);
	later_date = temp_date * 100;
	scanf(" /%d /", &temp_date);
	later_date += temp_date;
	scanf("%d", &temp_date);
	later_date += temp_date * 10000;

	// Sort dates
	if(earlier_date > later_date) {
		temp_date = earlier_date;
		earlier_date = later_date;
		later_date = temp_date;
	}

	// Print results
	printf("%d/%d/%.2d is earlier than ", earlier_date / 100 % 100, earlier_date % 100, earlier_date / 10000);
	printf("%d/%d/%.2d\n", later_date / 100 % 100, later_date % 100, later_date / 10000);

	return 0;
}
