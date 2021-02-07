// In the dweight.c program which spaces are essential?

// ORIGINAL: Computes the dimensional weight of a 12" x 10" x 8" box

#include<stdio.h>

int main(void) // the space between int and main is essential
{
	int height, length, width, volume, weight; // the space between int and height is essential

	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0; // the space between return and 0 is essential
}
