// Write functions that return the following values. (Assume that a and n are
// parameters, where a is an array of int values and n is the length of the
// array.)
// (a) The largest element in a.
// (b) The average of all elements in a.
// (c) The number of positive elements in a.

#include<stdio.h>
#define SIZE ((int) (sizeof(array) / sizeof(array[0])))

int largest(int array[], int length);
int average(int array[], int length);
int positive_elements(int array[], int length);

int main(void)
{
	int array[5] = {-15, 123, 72, 5, -2};

	for (int i = 0; i < SIZE; ++i)
		printf("%d ", array[i]);
	putchar('\n');

	printf("Largest number: %d\n", largest(array, SIZE));
	printf("Average: %d\n", average(array, SIZE));
	printf("Positive numbers: %d\n", positive_elements(array, SIZE));

	return 0;
}

int largest(int array[], int length)
{
	int largest = array[0];
	for (int i = 1; i < length; ++i)
		if (array[i] > largest)
			largest = array[i];

	return largest;
}

int average(int array[], int length)
{
	int average = 0;
	for (int i = 0; i < length; ++i)
		average += array[i];
	average /= length;

	return average;
}

int positive_elements(int array[], int length)
{
	int positive_numbers = 0;
	for (int i = 0; i < length; ++i)
		if (array[i] > 0)
			positive_numbers++;

	return positive_numbers;
}
