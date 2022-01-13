// Write the following function:
// float compute_GPA(char grades[], int n);
// The grades array will contain letter grades (A, B, C, D, or F, either
// upper-case or lower-case); n is the length of the array. The function should
// return the average of the grades (assume that A = 4, B = 3, C = 2, D = 1, and
// F = 0).
#include<stdio.h>
#include<ctype.h>

#define SUBJECTS 8

float compute_GPA(char grades[], int n);

int main(void)
{
	char user_grades[SUBJECTS] = {'A', 'A', 'F', 'B', 'c', 'B', 'A', 'a'};
	printf("Your GPA is %.2f\n", compute_GPA(user_grades, SUBJECTS));
	return 0;
}

float compute_GPA(char grades[], int n)
{
	float gpa = 0;
	int grade_values[6] = {4, 3, 2, 1, 0, 0};

	for (int i = 0; i < n; ++i) {
		gpa += grade_values[(toupper(grades[i]) - 'A')];
	}
	gpa /= n;

	return gpa;
}
