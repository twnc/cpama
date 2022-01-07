// Write a program fragment that declares an 8 x 8 char array named
// checker_board that uses a loop to store the following data into the array
// (one character per array element):
// B R B R B R B R
// R B R B R B R B
// B R B R B R B R
// R B R B R B R B
// B R B R B R B R
// R B R B R B R B
// B R B R B R B R
// R B R B R B R B
// Hint: The element in row i, column j, should be the letter B if i + j is an
// even number

#include<stdio.h>

#define BOARD_SIZE 8
#define COLORS ((int)(sizeof(checker_colors)/sizeof(checker_colors[0])))

int main(void)
{
	char checker_board[BOARD_SIZE][BOARD_SIZE];
	char checker_colors[] = {'B', 'R'};

	// Initalise checker board
	for (int i = 0; i < BOARD_SIZE; ++i)
		for (int j = 0; j < BOARD_SIZE; ++j)
			checker_board[i][j] = checker_colors[(i + j) % COLORS];

	// Print board
	for (int i = 0; i < BOARD_SIZE; ++i) {
		for (int j = 0; j < BOARD_SIZE; ++j)
			printf("%c ", checker_board[i][j]);
		putchar('\n');
	}

	return 0;
}
