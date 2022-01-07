// Write a declaration for an 8 x 8 char array named chess_board. Include an
// initalizer that puts the following data into the array (one character per
// array element):
// r n b q k b n r
// p p p p p p p p
//   .   .   .   .
// .   .   .   .
//   .   .   .   .
// .   .   .   .
// P P P P P P P P
// R N B Q K B N R
#include<stdio.h>

#define BOARD_SIZE 8

int main(void)
{
	char chess_board[BOARD_SIZE][BOARD_SIZE] = {{'r','n','b','q','k','b','n','r'},
						    {'p','p','p','p','p','p','p','p'},
						    {' ','.',' ','.',' ','.',' ','.'},
						    {'.',' ','.',' ','.',' ','.',' '},
						    {' ','.',' ','.',' ','.',' ','.'},
						    {'.',' ','.',' ','.',' ','.',' '},
						    {'P','P','P','P','P','P','P','P'},
						    {'R','N','B','Q','K','B','N','R'}};

	// Print chess board
	for (int i = 0; i < BOARD_SIZE; ++i) {
		for (int j = 0; j < BOARD_SIZE; ++j)
			printf("%c ", chess_board[i][j]);
		putchar('\n');
	}

	return 0;
}
