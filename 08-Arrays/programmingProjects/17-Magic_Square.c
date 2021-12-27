// Write a program that prints an n x n magic square (a square arrangement of
// the numbers 1, 2, ..., n^2 in which the sums of the rows, columns, and
// diagonals are all the same.) The user will specify the value of n:
//
// This program creates a magic square of a specified size.
// The size must be an odd number between 1 and 99.
// Enter size of magic square: 5
//    17   24    1    8   15
//    23    5    7   14   16
//     4    6   13   20   22
//    10   12   19   21    3
//    11   18   25    2    9
//
// Store the magic square in a two-dimensional array. Start by placing the
// number 1 in the middle of row 0. Place each of the remaining numbers 2, 3,
// ..., n^2 by moving up one row and over one column. Any attempt to go outside
// the bounds of the array should "wrap around" to the opposite side of the
// array. For example, instead of storing the next number in row -1, we would
// store in row n - 1 (the last row). Instead of storing the next number in
// column n, we would store in column 0. If a particular array element is
// already occupied, put the number directly below the previously stored number.
// If your compiler supports variable-length arrays, declare the array to have n
// rows and n columns. If not, declare the array to have 99 rows and 99 columns.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99\n");
	printf("Enter size of magic square: ");
	fflush(stdout);
	scanf("%d", &n);

	int magic_square[n][n];
	// Initialise array to zero
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			magic_square[i][j] = 0;

	int x = 0, y = (n / 2);
	for (int i = 1; i <= (n * n); ++i) {
		magic_square[x][y] = i;
		x = (x + n - 1) % n;
		y = (y + 1) % n;
		if (magic_square[x][y] != 0) {
			x = (x + 2) % n;
			y = (y + n - 1) % n;
		}
	}

	// Print results
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			printf("%5d", magic_square[i][j]);
		printf("\n");
	}

	// Check that it is a valid magic square
	bool valid = true;
	int sum_of_first_row = 0;
	int sum;
	for (int i = 0; i < n; ++i)
		sum_of_first_row += magic_square[0][i];

	// Check rows
	for (int i = 1; i < n; ++i) {
		sum = 0;
		for (int j = 0; j < n; ++j)
			sum += magic_square[i][j];
		if (sum != sum_of_first_row) {
			valid = false;
			break;
		}
	}
	// Check columns
	for (int j = 0; j < n; ++j) {
		sum = 0;
		for (int i = 0; i < n; ++i)
			sum += magic_square[i][j];
		if (sum != sum_of_first_row) {
			valid = false;
			break;
		}
	}
	// Check diagonals
	sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += magic_square[i][i];
	}
	if (sum != sum_of_first_row)
		valid = false;
	int j = n - 1;
	sum = 0;
	for(int i = 0; i < n; ++i) {
		sum += magic_square[i][j];
		--j;
	}
	if (sum != sum_of_first_row)
		valid = false;

	if (valid)
		printf("This is a valid magic square.\n");
	else
		printf("This is NOT a valid magic square.\n");

	return 0;
}
