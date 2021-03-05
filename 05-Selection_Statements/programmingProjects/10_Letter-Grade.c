// Using the switch statement, write a program that converts a numerical grade
// into a letter grade:
//
// Enter numerical grade: 84
// Letter grade: B
//
// Use the following grading scale: A = 90-100, B = 80-89, C = 70-79, D = 60-69,
// F = 0-59. Print an error message if the grade is larger than 100 or less than
// 0. Hint: Break the grade into two digits, then use a switch statement to test
// the ten's digit.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int numerical_grade;
	bool valid_input;

	printf("Enter numerical grade: ");
	scanf("%d", &numerical_grade);

	valid_input = numerical_grade >= 0 && numerical_grade <= 100;

	if(valid_input) {
		numerical_grade /= 10;

		printf("Letter grade: ");
		switch(numerical_grade) {
			case 10: case 9:
				printf("A\n"); break;
			case 8:
				printf("B\n"); break;
			case 7:
				printf("C\n"); break;
			case 6:
				printf("D\n"); break;
			default:
				printf("F\n"); break;
		}
	} else
		printf("ERROR: Invalid input. Grade must be between 0 and 100.\n");

	return 0;
}
