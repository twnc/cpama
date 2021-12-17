// Write a program that generates a "random walk" across 10 x 10 array. The
// array wil contain characters (all ' ' initially). The program must randomly
// "walk" from element to element, always going up, down, left, or right by one
// element. The elements visited by the program will be labeled with the letters
// A through Z, in the order visited. Here's an example of the desired output:
//
// A . . . . . . . . .
// B C D . . . . . . .
// . F E . . . . . . .
// H G . . . . . . . .
// I . . . . . . . . .
// J . . . . . . . Z .
// K . . R S T U V Y .
// L M P Q . . . W X .
// . N O . . . . . . .
// . . . . . . . . . .

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define N 10

int main(void)
{
	// Initialise matrix
	char matrix[N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j)
			matrix[i][j] = '.';
	}

	// Seed random function
	srand((unsigned) time(NULL));

	int x, y;
	x = y = 0;
	for (char ch= 'A'; ch <= 'Z'; ++ch) {

	}

	// Print matrix
	for (int i = 0; i < N; ++i) {
		printf("%c", matrix[i][0]);
		for (int j = 1; j < N; ++j)
			printf(" %c", matrix[i][j]);
		printf("\n");
	}

	return 0;
}
