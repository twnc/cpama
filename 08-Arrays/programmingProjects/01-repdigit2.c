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
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}

	if (n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digits\n");

	return 0;
}
