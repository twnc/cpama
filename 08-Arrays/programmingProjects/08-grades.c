// Modify Programming Project 7 so that it prompts for five quiz grades for each
// of five students, then computes the total score and average score for each
// student, and the average score, high score, and low score for each quiz.
//
// ORIGINAL
// Write a program that reads a 5 x 5 array of integers and then prints the row
// sums and the column sums:
// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0
//
// Row totals: 30 27 40 36 28
// Column totals: 34 37 37 32 14

#include<stdio.h>

#define ROWS 5
#define COLUMNS 5

int main(void)
{
	int matrix[ROWS][COLUMNS];

	// Collect user input
	for (int i = 0; i < ROWS; ++i) {
		printf("Enter row %d: ", i + 1);
		fflush(stdout);
		for (int j = 0; j < COLUMNS; ++j)
			scanf("%d", &matrix[i][j]);
	}
	printf("\n");

	// Print row totals
	printf("Row totals:");
	for (int i = 0; i < ROWS; ++i) {
		int total = 0;
		for (int j = 0; j < COLUMNS; ++j)
			total += matrix[i][j];
		printf(" %d", total);
	}
	printf("\n");

	// Print column totals
	printf("Column totals:");
	for (int i = 0; i < COLUMNS; ++i) {
		int total = 0;
		for (int j = 0; j < ROWS; ++j)
			total += matrix[j][i];
		printf(" %d", total);
	}
	printf("\n");

	return 0;
}
