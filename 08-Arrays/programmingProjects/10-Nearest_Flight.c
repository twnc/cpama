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

#define SIZE ((int) (sizeof(departures)/sizeof(departures[0])))
#define FLIGHTS 8

#include<stdio.h>
#include<stdbool.h>

void printTime(int time)
{
	int hours = time / 60;
	int minutes = time % 60;
	bool pm = hours > 11;
	if (hours > 12)
		hours %= 12;
	printf("%d:%.2d ", hours, minutes);
	if (pm)
		printf("p.m.");
	else
		printf("a.m.");
	return;
}

int main(void)
{
	int user_time, user_hour, user_minutes, closest_time;

	// Arrays of departure times and their corresponding arrival times
	const int departures[FLIGHTS] = {8 * 60, 9 * 60 + 43, 11 * 60 + 19,
		12 * 60 + 47, 14 * 60, 15 * 60 + 45, 19 * 60, 21 * 60 + 45};
	const int arrivals[FLIGHTS] = {10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31,
		15 * 60, 16 * 60 + 8, 17 * 60 + 55, 21 * 60 + 20, 23 * 60 + 58};

	// Take user input
	printf("Enter a 24-hour time: ");
	fflush(stdout);
	scanf("%d :%d", &user_hour, &user_minutes);
	user_time = user_hour * 60 + user_minutes;

	// Find closest departure time
	for (int i = 0; i < SIZE - 1; ++i) {
		if ((user_time - departures[i]) < (departures[i+1] - user_time)) {
			closest_time = i;
			break;
		} else
			closest_time = i + 1;
	}

	// Print results
	printf("Closest departure time is ");
	printTime(departures[closest_time]);
	printf(", arriving at ");
	printTime(arrivals[closest_time]);
	printf("\n");

	return 0;
}
