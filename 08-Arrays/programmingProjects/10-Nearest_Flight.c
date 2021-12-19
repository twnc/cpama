// Modify Programming Project 8 from Chapter 5 so that the departure times are
// stored in an array and the arrival times are store in a second array. (The
// times are integers, representing the number of minutes since midnight.) The
// program will use a loop to search the array of departure times for the one
// closest to the time entered by the user.
//
// ORIGINAL:
// The following table shows the daily flights from one city to another:
// Departure time	Arrival time
// 	8:00 a.m.	10:16 a.m.
//	9:43 a.m.	11:52 a.m.
//	11:19 a.m.	1:31 p.m.
//	12:47 p.m.	3:00 p.m.
//	2:00 p.m.	4:08 p.m.
//	3:45 p.m.	5:55 p.m.
//	7:00 p.m.	9:20 p.m.
//	9:45 p.m.	11:58 p.m.
//
// Write a program that asks the user to enter a time (expressed in hours and
// minutes, using the 24-hour clock). The program then displays the departure
// and arrival times for the flight whose departure time is closest to that
// entered by the user:
//
// Enter a 24-hour time: 13:15
// Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
//
// Hint: Convert the input into a time expressed in minutes since midnight, and
// compare it to the departure times, also expressed in minutes since midnight.
// For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight, which is
// closer to 12:47 p.m. (767 minutes since midnight) than to any of the other
// departure times.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int user_time, user_hour, user_minutes, closest_time;

	const int dep1 = 8 * 60;
	const int dep2 = 9 * 60 + 43;
	const int dep3 = 11 * 60 + 19;
	const int dep4 = 12 * 60 + 47;
	const int dep5 = 14 * 60;
	const int dep6 = 15 * 60 + 45;
	const int dep7 = 19 * 60;
	const int dep8 = 21 * 60 + 45;

	printf("Enter a 24-hour time: ");
	scanf("%d :%d", &user_hour, &user_minutes);
	user_time = user_hour * 60 + user_minutes;

	if(user_time < dep1)
		closest_time = dep1;
	else if (user_time > dep8)
		closest_time = dep8;
	else {
		int time_below;
		int time_above;

		if(user_time < dep2) {
			time_below = dep1;
			time_above = dep2;
		} else if(user_time < dep3) {
			time_below = dep2;
			time_above = dep3;
		} else if (user_time < dep4) {
			time_below = dep3;
			time_above = dep4;
		} else if (user_time < dep5) {
			time_below = dep4;
			time_above = dep5;
		} else if (user_time < dep6) {
			time_below = dep5;
			time_above = dep6;
		} else if (user_time < dep7) {
			time_below = dep6;
			time_above = dep7;
		} else {
			time_below = dep7;
			time_above = dep8;
		}

		if(user_time - time_below < time_above - user_time)
			closest_time = time_below;
		else
			closest_time = time_above;
	}

	int closest_hour = closest_time / 60;
	int closest_minute = closest_time % 60;
	bool pm = closest_hour > 11;
	if(closest_hour > 12)
		closest_hour %= 12;

	printf("Closest departure time is %d:%.2d ", closest_hour, closest_minute);
	if(pm) printf("p.m., arriving at ");
	else printf("a.m., arriving at ");

	switch(closest_time) {
		case dep1: printf("10:16 a.m.\n"); break;
		case dep2: printf("11:52 a.m.\n"); break;
		case dep3: printf("1:31 p.m.\n"); break;
		case dep4: printf("3:00 p.m.\n"); break;
		case dep5: printf("4:08 p.m.\n"); break;
		case dep6: printf("5:55 p.m.\n"); break;
		case dep7: printf("9:20 p.m.\n"); break;
		case dep8: printf("11:58 p.m.\n"); break;
		default: printf("ERROR\n"); break;
	}

	return 0;
}
