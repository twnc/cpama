// Write a program that prints a one-month calendar. The user specifies the
// number of days in the month and the day of the week on which the month
// begins:
//
// Enter number of days in month: 31
// Enter starting day of the week (1=Sun, 7=Sat): 3
//        1  2  3  4  5
//  6  7  8  9 10 11 12
// 13 14 15 16 17 18 19
// 20 21 22 23 24 25 26
// 27 28 29 30 31
//
// Hint: Add later, try without first

#include<stdio.h>

int main(void)
{
	int days_in_month, starting_weekday;
	printf("Enter number of days in month: ");
	scanf("%d", &days_in_month);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_weekday);


	starting_weekday--;
	for(int i = 1; i <= days_in_month + starting_weekday; i++) {
		if(i <= starting_weekday)
			printf("   ");
		else {
			printf("%2d", i-starting_weekday);

			if(i%7 == 0)
				printf("\n");
			else
				printf(" ");
		}
	}
	printf("\n");

	return 0;
}
