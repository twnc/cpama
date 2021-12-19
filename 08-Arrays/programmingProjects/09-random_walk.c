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

#define HEIGHT 10
#define WIDTH 10

#define MAX_X (WIDTH - 1)
#define MIN_X 0
#define MAX_Y (HEIGHT - 1)
#define MIN_Y 0

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#define UNOCCUPIED '.'

int main(void)
{
	// Initialise matrix
	char matrix[HEIGHT][WIDTH];
	for (int i = 0; i < HEIGHT; ++i) {
		for (int j = 0; j < WIDTH; ++j)
			matrix[i][j] = UNOCCUPIED;
	}

	// Seed random function
	srand((unsigned) time(NULL));

	// Snake randomly through matrix
	int x, y;
	x = y = 0;
	matrix[y][x] = 'A';
	for (char ch= 'B'; ch <= 'Z'; ++ch) {
		int valid_directions[4] = {-1,-1,-1,-1};

		// Check which directions are available
		int free_sides = 0;
		if ((y+1 <= MAX_Y) && (matrix[y+1][x] == UNOCCUPIED)) // Check up
			valid_directions[free_sides++] = UP;
		if ((y-1 >= MIN_Y) && (matrix[y-1][x] == UNOCCUPIED)) // Check down
			valid_directions[free_sides++] = DOWN;
		if ((x-1 >= MIN_X) && (matrix[y][x-1] == UNOCCUPIED)) // Check left
			valid_directions[free_sides++] = LEFT;
		if ((x+1 <= MAX_X) && (matrix[y][x+1] == UNOCCUPIED)) // Check right
			valid_directions[free_sides++] = RIGHT;

		// End loop if surrounded
		if (free_sides == 0)
			break;

		// Generate random valid direction
		int direction = valid_directions[rand() % free_sides];

		// Move in direction
		switch (direction) {
			case UP:
				++y;
				break;
			case DOWN:
				--y;
				break;
			case LEFT:
				--x;
				break;
			case RIGHT:
				++x;
				break;
		}
		matrix[y][x] = ch;
	}

	// Print matrix
	for (int i = 0; i < HEIGHT; ++i) {
		printf("%c", matrix[i][0]);
		for (int j = 1; j < WIDTH; ++j)
			printf(" %c", matrix[i][j]);
		printf("\n");
	}

	return 0;
}
