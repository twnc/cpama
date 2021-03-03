// Are the following if statements equivalent? If not, why not?
//
// ANSWER: Yes they are equivalent, at least in terms of output. Depending on how
// the scores are distributed however, one might be faster. For a score of 93 for
// example, the first statement would solve it with just one if evaluation,
// whereas in the second it would require all four. For a score of 53, it would
// be the other way around. 

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
