// Using the array of Exercise 8, write a program fragment that computes the
// average temperature for a month (average over all days of the month and all
// hours of the day).
// ORIGINAL:
// Write a declaration for a two-dimensional array named temperature_readings
// that stores one month of hourly temperature readings. (For simplicity, assume
// that a month has 30 days.) The rows of the array should represent days of the
// month; the column should represent hours of the day.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
	double temperature_readings[DAYS][HOURS] = {0};

	// Seed random function
	srand((unsigned) time(NULL));

	// Initialise all temperatures to random number between -10 and 30
	for (int i = 0; i < DAYS; ++i)
		for (int j = 0; j < HOURS; ++j)
			temperature_readings[i][j] = ((rand() % 300) - 100) / 10.0;

	// Print all temperatures
	for (int i = 0; i < DAYS; ++i) {
		for (int j = 0; j < HOURS; ++j)
			printf("%5.1lf°C ", temperature_readings[i][j]);
		printf("\n");
	}

	// Calculate average
	double average = 0;
	for (int i = 0; i < DAYS; ++i) {
		for (int j = 0; j < HOURS; ++j)
			average += temperature_readings[i][j];
	}
	average /= (DAYS * HOURS);

	printf ("Average temperature: %.2lf°C\n", average);

	return 0;
}
