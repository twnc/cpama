// Write a program that finds the largest and smallest of four integers entered
// by the user:
// Enter four integers: 21 43 10 35
// Largest: 43
// Smallest: 10

#include<stdio.h>

int main(void)
{
	int i1, i2, i3, i4, largest, smallest, temp;

	printf("Enter four integers: ");
	scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

	if(i1 > i2) {
		largest = i1;
		smallest = i2;
	} else {
		largest = i2;
		smallest = i1;
	}

	// Sort i3 and i4
	if(i3 > i4) {
		temp = i3;
		i3 = i4;
		i4 = temp;
	}

	if(i3 < smallest)
		smallest = i3;

	if(i4 > largest)
		largest = i4;

	printf("Largest: %d\nSmallest %d\n", largest, smallest);

	return 0;
}
