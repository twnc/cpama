// Programming Project 9 in Chapter 5 asked you to write a program that
// determines which of two dates comes earlier on the calendar. Generalise the
// program so that the user may enter any number of dates. The user will enter
// 0/0/0 to indicate that no more dates will be entered.
//
// Enter a date (mm/dd/yy): 4/6/08
// Enter a date (mm/dd/yy): 5/17/07
// Enter a date (mm/dd/yy): 6/3/07
// Enter a date (mm/dd/yy): 0/0/0
// 5/17/07 is the earliest date.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int earlier_date = 0, later_date, temp_date;

	// Store date as integer in the form yymmdd so that dates can be
	// compared like normal numbers. This format also allows them to be
	// split up with divides and modulos.
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d", &temp_date);
	earlier_date = temp_date * 100;
	scanf(" /%d /", &temp_date);
	earlier_date += temp_date;
	scanf("%d", &temp_date);
	earlier_date += temp_date * 10000;

	while(true) {
		// Store second date in same format
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d", &temp_date);
		later_date = temp_date * 100;
		scanf(" /%d /", &temp_date);
		later_date += temp_date;
		scanf("%d", &temp_date);
		later_date += temp_date * 10000;

		// User can enter 0/0/0 to exit
		if(later_date == 0)
			break;

		// Sort dates
		if(earlier_date > later_date) {
			temp_date = earlier_date;
			earlier_date = later_date;
			later_date = temp_date;
		}
	}

	// Print results
	printf("%d/%d/%.2d is the earliest date.\n", earlier_date / 100 % 100, earlier_date % 100, earlier_date / 10000);

	return 0;
}
