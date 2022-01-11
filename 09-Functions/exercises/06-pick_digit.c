// Write a function digit(n, k) that returns the kth digit (from the right) in n
// (a positive integer), For example, digit(829,1) returns 9, digit(829,2)
// returns 2 and digit(829,3( returns 8. If k is greater than the number of
// digits in n, have the function return 0.

#include<stdio.h>
#include<stdlib.h>

int digit(int n, int k)
{
	int answer = abs(n);
	int chosen_digit = abs(k);

	while (chosen_digit > 1) {
		answer /= 10;
		--chosen_digit;
	}
	answer %= 10;

	return answer;
}

int main(void)
{
	int user_number, chosen_digit;
	printf("Please enter a positive integer:\n");
	scanf("%d", &user_number);

	printf("Which digit would you like?\n");
	scanf("%d", &chosen_digit);

	printf("Chosen digit:\n%d\n", digit(user_number, chosen_digit));
	return 0;
}
