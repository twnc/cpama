// Write a function day_of_year(month, day, year) that returns the day of the
// year (an integer between 1 and 366) specified by the three arguments.

#include<stdio.h>
#include<stdbool.h>

bool is_leap_year(int year)
{
	if (year % 4 != 0)
		return false;
	if (year < 1752)
		return false;
	if (year % 100 == 0 && year % 400 !=0)
		return false;

	return true;
}

int day_of_year(int month, int day, int year)
{
	int day_number = 0;
	int days_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (is_leap_year(year))
		days_per_month[1] = 29;

	for (int i = 0; i < (month - 1); ++i) {
		day_number += days_per_month[i];
	}
	day_number += day;

	return day_number;
}

int main(void)
{
	int month, day, year;
	printf("Please enter the month in format MM/DD/YYYY:\n");
	scanf("%d / %d / %d", &month, &day, &year);

	if (month > 12 || month < 1 || day < 1 || day > 31)
		printf("Invalid date\n");
	else
		printf("It is day %d of the year %d.\n", day_of_year(month, day, year), year);

	return 0;
}
