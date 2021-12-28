// The Q&A section shows how to use a letter as an array subscript. Describe how
// to use a digit (in character form) as a subscript.

#include<stdio.h>

#define SIZE (int) (sizeof(example) / sizeof(example[0]))
int main(void)
{
	int example[5];
	// Minus the character from the starting character, in this case '0',
	// should give you the numbers your looking for. This relies on
	// consecutive ordering however and isn't true of all character sets.
	example['3' - '0'] = 3;
	example['4' - '0'] = 4;
	example['0' - '0'] = 0;
	example['2' - '0'] = 2;
	example['1' - '0'] = 1;

	// Output should be 0 1 2 3 4
	for (int i = 0; i < SIZE; ++i)
		printf("%d ", example[i]);
	putchar('\n');

	return 0;
}
