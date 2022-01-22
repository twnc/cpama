// Had a quick go at implementing quicksort!

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define LENGTH 20

void print_array(int a[LENGTH], int size);
void quicksort(int a[LENGTH], int size);

int main(void)
{
	// Seed random function
	srand((unsigned)time(NULL));

	// Generate random numbers for array a
	int a[LENGTH] = {0};
	for(int i = 0; i < LENGTH; ++i) {
		a[i] = (rand() % 100) - 50;
	}

	// Print array, sort array, then print again
	print_array(a, LENGTH);
	quicksort(a, LENGTH);
	print_array(a, LENGTH);

	// Check for errors
	bool correct = true;
	for (int i = 0; i < (LENGTH - 1); i++)
		if (a[i] > a[i+1]) {
			correct = false;
			break;
		}
	if (!correct)
		printf("There was an error!\n");

	return 0;
}

void print_array(int a[LENGTH], int size)
{
	printf("%d", a[0]);
	for(int i = 1; i < size; ++i)
		printf(" %d", a[i]);
	printf("\n");
}

void quicksort(int a[LENGTH], int size)
{
	int pivot = a[(size - 1) / 2];
	int pivot_index = 0;
	int biggest_index = size - 1;

	// Find correct position for pivot
	for (int i = 0; i < size; ++i) {
		if (a[i] < pivot)
			pivot_index++;
	}

	// Swap pivot to correct position
	a[(size - 1) / 2] = a[pivot_index];
	a[pivot_index] = pivot;

	// Put all elements bigger than pivot after pivot
	for (int i = 0; i < pivot_index; ++i) {
		if (a[i] >= pivot) {
			// Find last element smaller than pivot
			while (a[biggest_index] >= pivot)
				biggest_index--;
			// Swap a[i] with this
			int temp = a[biggest_index];
			a[biggest_index] = a[i];
			a[i] = temp;
			// Decrement biggest_index
			biggest_index--;
		}
	}

	// Recursive call for smaller elements
	if (pivot_index >= 2)
		quicksort(a, pivot_index);

	// Recursive call for larger elements
	int bigger_items = (size - 1) - pivot_index;
	if (bigger_items >= 2) {
		quicksort(&a[pivot_index + 1], bigger_items);
	}
}
