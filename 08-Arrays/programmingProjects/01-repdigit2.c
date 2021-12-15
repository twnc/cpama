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
	bool repeated_digits = false;
	int digit;
	long n;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if(++digit_seen[digit] > 1)
			repeated_digits = true;
		n /= 10;
	}

	if (repeated_digits) {
		printf("Repeated digit(s):");
		for (int i = 0; i < sizeof(digit_seen)/sizeof(digit_seen[0]); ++i)
			if (digit_seen[i] > 1)
				printf(" %d", i);
		printf("\n");
	} else
		printf("No repeated digits\n");

	return 0;
}
