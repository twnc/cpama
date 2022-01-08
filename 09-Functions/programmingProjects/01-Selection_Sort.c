// Write a program that asks the user to enter a series of integers (which it
// stores in an array), then sorts the integers by calling the function
// selection_sort. When given an array with n elements, selection_sort must do
// the following:
// 1. Search the array to find the largest element, then move it to the last
//    position in the array.
// 2. Call itself recursively to sort the first n-1 elements of the array.

#include<stdio.h>
#define SIZE 8

void selection_sort(int series[], int length) {
	// Find biggest number
	int biggest = series[0];
	int biggest_index = 0;
	for (int i = 0; i < length; ++i)
		if (series[i] > biggest) {
			biggest = series[i];
			biggest_index = i;
		}

	// Swap biggest number with final number
	int temp = series[length - 1];
	series[length-1] = biggest;
	series[biggest_index] = temp;

	// Call recursively excluding final number
	if (length > 2)
		selection_sort(series, --length);
}

int main(void)
{
	int series[SIZE] = {0};

	// Ask for input
	printf("Please enter a series of %d integers:\n", SIZE);
	for (int i = 0; i < SIZE; ++i)
		scanf("%d", &series[i]);

	// Sort input
	selection_sort(series, SIZE);

	// Print output
	for (int i = 0; i < SIZE; ++i)
		printf("%d ", series[i]);
	putchar('\n');
	return 0;
}
