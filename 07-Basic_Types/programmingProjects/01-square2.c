// The square 2.c program of Section 6.3 will fail (usually by printing strange
// answers) if i * i exceeds the maximum int value. Run the program and
// determine the smallest value of n that causes failure. Try changing the type
// of i to short and running the porgram again. (Don't forget to update the
// conversion specifications in the call of printf!) Then try long. From these
// experiments, what can you conclude about the number of bits used to store
// integer types on your machine?
// ANSWER:
// Smallest value of n that causes failure:
// Smallest short n: 	182
// Smallest int n: 	46341
// Smallest long n: 	3037000500
//
// Short:
// Smallest int n that caused failure was 182. So 181 squared must be close to
// the maximum positive value of a short.
// 181 * 181 = 32761
// Given that there will typically be the same number of negative numbers (or
// one more if you don't consider zero to be positive), if we double it, we get
// close to the number of possible values that can be stored in a short in this
// implementation.
// 181 * 2 = 65522
// The nearest power of two is 2^16 which is 65,536 which would suggest that
// shorts use 16 bits or 2 bytes.
//
// Int:
// Smallest int n: 46341
// (smallest n - 1) * (smallest n - 1) * 2 = (46340 ^ 2) * 2 = 2147395600 * 2 =
// 4294791299 possible values. The closest power of two is 4294967296 which is
// 2 ^ 32 which would suggest that in this implementation, ints use 32 bits or 4
// bytes.
//
// Long:
// smallest_n = 3037000500
// possible_values = (smallest_n - 1) * (smallest n - 1) * 2 =
// 18446744061852498002
// two_power = 0
// while (possible_values > 1) :
// 	possible_values = possible_values / 2
// 	two_power = two_power + 1
// two_power == 64
// The closest power of two the rough number of possible values is 2 ^ 64 which
// would suggest that in this implementation, longs use 64 bits or 8 bytes.
//
// These results of 2, 4 and 8 bytes respectively for short, int and long match
// the output of the sizeof commands, so it looks correct!
//
// ORIGINAL:
// Prints a table of squares using a for statement.

#include<stdio.h>
#include<limits.h>

int main(void)
{
	int i;
	long n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);

	for(i = 1; i <= n; i++) {
		printf("%d %d\n", i, i * i);
	}
	printf("\n");

	// SHORT
	// Modified to only print to the last number of the sequence, either n
	// or the the first number that doesn't work
	short s;
	for(s = 1; s < SHRT_MAX; s++) {
		// When shorts are multiplied with one another then they seem to be
		// promoted to integers, so I had to cast them back to shorts.
		if((short)(s*s)/s != s) {
			break;
		}
	}
	printf("Smallest short n that causes failure:\t%hd\t\t%hd\n", s, (short)(s * s));
	printf("\a");

	// INT
	for(i = 1; i < INT_MAX; i++) {
		if((i*i)/i != i) {
			break;
		}
	}
	printf("Smallest int n that causes failure:\t%d\t\t%d\n", i, i * i);
	printf("\a");

	// LONG
	long l;
	for(l = 1; l < LONG_MAX; l++) {
		if((l*l)/l != l) {
			break;
		}
	}
	printf("Smallest long n that causes failure:\t%ld\t%ld\n", l, l * l);
	printf("\a");

	printf("\n");
	printf("sizeof(short) = %zd\n", sizeof(short));
	printf("sizeof(int) = %zd\n", sizeof(int));
	printf("sizeof(long) = %zd\n", sizeof(long));


	return 0;
}
