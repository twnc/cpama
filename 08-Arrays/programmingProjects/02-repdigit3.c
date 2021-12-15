// Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in the number:
// Enter a number: 41271092
// Digit: 	0  1  2  3  4  5  6  7  8  9
// Occurences:  1  2  2  0  1  0  0  1  0  1
// LAST VERSION:
// Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:
// Enter a number: 939577
// Repeated digit(s): 7 9
// ORIGINAL:
// Checks numbers for repeated digits
// Enter a number: 28212
// Repeated digit

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int digit_seen[10] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		++digit_seen[digit];
		n /= 10;
	}

	printf("Digit:\t\t");
	for(int i = 0; i < 10; ++i)
		printf("%3d", i);
	printf("\n");

	printf("Occurences:\t");
	for(int i = 0; i < 10; ++i)
		printf("%3d", digit_seen[i]);
	printf("\n");

	return 0;
}
