// Calculators, watches, and other electronic devies often rely on seven-segment
// displays for numerical output. To form a digit, such devices "turn on" some
// of the seven segments while leaving others "off":
//  _       _   _       _   _   _   _   _
// | |   |  _|  _| |_| |_  |_    | |_| |_|
// |_|   | |_   _|   |  _| |_|   | |_|  _|
// Suppose that we want to set up an array that remembers which segments should
// be "on" for each digit. Let's number the segments as follows:
// Hers' what the array might look like, with each row representing one digit:
// const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, ...};
// I've given you the first row of the initializer, fill in the rest.

#include<stdio.h>

int main(void)
{
	const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
				     {0, 1, 1, 0, 0, 0, 0},
	                             {1, 1, 0, 1, 1, 0, 1},
	                             {1, 1, 1, 1, 0, 0, 1},
	                             {0, 1, 1, 0, 0, 1, 1},
	                             {1, 0, 1, 1, 0, 1, 1},
	                             {1, 0, 1, 1, 1, 1, 1},
	                             {1, 1, 1, 0, 0, 0, 0},
	                             {1, 1, 1, 1, 1, 1, 1},
	                             {1, 1, 1, 1, 0, 1, 1}};

	for (int i = 0; i < 10; ++i) {
		// First row
		putchar(' ');
		if (segments[i][0])
			putchar('_');
		else putchar(' ');
		putchar(' ');
		putchar('\n');
		// Second row
		if (segments[i][5])
			putchar('|');
		else putchar(' ');
		if (segments[i][6])
			putchar('_');
		else putchar(' ');
		if (segments[i][1])
			putchar('|');
		else putchar(' ');
		putchar('\n');
		// Third row
		if (segments[i][4])
			putchar('|');
		else putchar(' ');
		if (segments[i][3])
			putchar('_');
		else putchar(' ');
		if (segments[i][2])
			putchar('|');
		else putchar(' ');
		putchar('\n');
	}
	return 0;
}
