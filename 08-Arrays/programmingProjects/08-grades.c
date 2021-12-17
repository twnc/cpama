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

#define STUDENTS 5
#define QUIZ 5

int main(void)
{
	int grades[STUDENTS][QUIZ];

	// Collect user input
	for (int i = 0; i < STUDENTS; ++i) {
		printf("Enter student %d's quiz scores: ", i + 1);
		fflush(stdout);
		for (int j = 0; j < QUIZ; ++j)
			scanf("%d", &grades[i][j]);
	}
	printf("\n");

	// Print each student's total score and average score
	for (int i = 0; i < STUDENTS; ++i) {
		int total = 0;
		for (int j = 0; j < QUIZ; ++j)
			total += grades[i][j];
		printf("Student %d's total score was   %3d\n", i + 1, total);
		printf("Student %d's ", i + 1);
		printf("average score was %3g\n\n", (double) total / QUIZ);
	}
	printf("\n");

	// Print average score, low score and high score for each quiz
	for (int i = 0; i < QUIZ; ++i) {
		int total = 0;
		// Set high and low score to first grade
		int low_score, high_score;
		low_score = high_score = grades[0][i];
		// Calculate total score, high and low score for current quiz
		for (int j = 0; j < STUDENTS; ++j) {
			if (grades[j][i] < low_score)
				low_score = grades[j][i];
			else if (grades[j][i] > high_score)
				high_score = grades[j][i];
			total += grades[j][i];
		}
		// Print results
		printf("Quiz %d:\nAverage score:%4d, ", i + 1, total / STUDENTS);
		printf("High score:%4d, Low score:%4d\n", high_score, low_score);
	}
	printf("\n");

	return 0;
}
