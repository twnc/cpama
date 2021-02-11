// Write a program that asks the user to enter the numbers from 1 to 16 (in any 
// order) and then displays the numbers in a 4 by 4 arrangement, followed by the 
// sums of the rows, columns, and diagonals:
//
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
// 16  3  2 13
//  5 10 11  8
//  9  6  7 12
//  4 15 14  1
//
//  Row sums: 34 34 34 34
//  Column sums: 34 34 34 34
//  Diagonal sums: 34 34
//
//  If the row, column and diagonal sums are all the same (as they are in this 
//  example), the numbers are said to form a magic square. The magic square shown 
//  in here appears in a 1514 engraving by artist and mathematician Albrecht 
//  Duerer. (Note that the middle numbers in the last row give the date of the 
//  engraving.)

#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10,
	    num11, num12, num13, num14, num15, num16;

	// Ask for user input
	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5,
	      &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);
	printf("\n");

	// Print Square
	printf("%2d%3d%3d%3d\n", num1,  num2,  num3,  num4);
	printf("%2d%3d%3d%3d\n", num5,  num6,  num7,  num8);
	printf("%2d%3d%3d%3d\n", num9,  num10, num11, num12);
	printf("%2d%3d%3d%3d\n", num13, num14, num15, num16);
	printf("\n");

	// Calculate row, column and diagonal sums
	int row1 = num1  + num2  + num3  + num4;
	int row2 = num5  + num6  + num7  + num8;
	int row3 = num9  + num10 + num11 + num12;
	int row4 = num13 + num14 + num15 + num16;
	int col1 = num1  + num5  + num9  + num13;
	int col2 = num2  + num6  + num10 + num14;
	int col3 = num3  + num7  + num11 + num15;
	int col4 = num4  + num8  + num12 + num16;
	int diagonal1 = num1 + num6 + num11 + num16;
	int diagonal2 = num4 + num7 + num10 + num13;

	// Print row, column and diagonal sums
	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
	printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

	// Check if Magic Square
	if(row1==34 && row1==row2 && row2==row3 && row3==row4 && row4==col1
           && col1==col2 && col2==col3 && col3==col4 && col4==diagonal1 &&
	   diagonal1==diagonal2) {
		printf("\nThis is a magic square!\n");
	}

	return 0;
}
