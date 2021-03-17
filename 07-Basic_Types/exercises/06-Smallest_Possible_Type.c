// For each of the following items of data, specify which one of the types char,
// short, int, or long is the smallest one guaranteed to be large enough to
// store the item.
// (a) Days in a month
// ANSWER: char, char could be either signed or unsigned depending on the
// implementation which would give us a minimum of either -128 to 127 or 0 to
// 255. Either way, 0-31 fit in both of these constraints.
// (b) Days in a year
// 365 won't always fit in a signed or unsigned char. It would however fit in a
// short which is guaranteed a minimum of the [−32,767, +32,767] range.
// (c) Minutes in a day
// 60 * 24 = 1200 + 240 = 1440
// 1440 would fit comfortably in the above mentioned range of a short.
// (d) Seconds in a day
// 1440 * 60 = 60000 + 24000 + 2400 = 86400 seconds
// This wouldn't fit in either the minimum short range [−32,767, +32,767] or the
// minimum guaranteed unsigned short range [0, 65,535]. Shorts and ints have the
// same minimum guarantees so the only type that would definitely fit would be a
// long with a range of [−2,147,483,647, +2,147,483,647].
//
// Interestingly with the program below I found that on my system's
// implementation, a char is 1 byte, an short is 2 bytes, an int is 4 bytes and
// and a long is 8 bytes. As a result the number of seconds in a day will fit in
// an int despite being outside the minimum guaranteed range.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	printf("%zu\n", sizeof(char));
	printf("%zu\n", sizeof(short));
	printf("%zu\n", sizeof(int));
	printf("%zu\n", sizeof(long));

	long l; int i; short s; char c;

	printf("Enter a number: ");
	scanf("%ld", &l);
	while(true) {
		i = l;
		if(i != l) {
			printf("In this implementation, long is the smallest ");
			printf("type that can fit %ld.\n", l);
			break;
		}
		s = i;
		if(s != i) {
			printf("In this implementation, int is the smallest ");
			printf("type that can fit %d.\n", i);
			break;
		}
		c = s;
		if(c != s) {
			printf("In this implementation, short is the smallest ");
			printf("type that can fit %hd.\n", s);
			break;
		}
		printf("In this implementation, char is the smallest ");
		printf("type that can fit %d.\n", c);
		break;
	}

	return 0;
}
