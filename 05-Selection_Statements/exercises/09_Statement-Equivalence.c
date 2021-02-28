// Are the following if statements equivalent? If not, why not?

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int score;

	srand((unsigned) time(0));
	score = rand() % 100;

	if (score >= 90)
		printf("A");
	else if (score >= 80)
		printf("B");
	else if (score >= 70)
		printf("C");
	else if (score >= 60)
		printf("D");
	else
		printf("F");
	printf("\n");

	if (score < 60)
		printf("F");
	else if (score < 70)
		printf("D");
	else if (score < 80)
		printf("C");
	else if (score < 90)
		printf("B");
	else
		printf("A");
	printf("\n");


	return 0;
}
