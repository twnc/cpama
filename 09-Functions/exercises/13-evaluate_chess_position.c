// Write the following fuction, which evaluates a chess position:
// int evaluate_position(char board[8][8]);
// board represents a configuration of pieces on a chessboard, where the letters
// K, Q, R, B, N, P represent White pieces, and the letters k, q, r, b, n and p
// represent Black pieces. evaluate_position should sum the values of the White
// pieces (Q = 9, R = 5, B = 3, N = 3, P = 1). It should also sum the values of
// the Black pieces (done in a similar way). The function will return the
// difference between the two numbers. This value will be positive if White has
// an advantage in material and negative if Black has an advantage.
#include<stdio.h>
#include<ctype.h>

#define BOARD_SIZE 8
#define PIECE_TYPES 6

int evaluate_position(char board[BOARD_SIZE][BOARD_SIZE]);

int main(void)
{
	char chess_board[BOARD_SIZE][BOARD_SIZE] = {{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
				                    {'.', '.', '.', '.', '.', '.', '.', '.'},
				                    {'.', '.', '.', '.', '.', '.', '.', '.'},
				                    {'.', '.', '.', '.', '.', '.', '.', '.'},
				                    {'.', '.', '.', '.', '.', '.', '.', '.'},
		                                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
				                    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}};

	int score = evaluate_position(chess_board);
	if (score == 0)
		printf("It is a tie!\n");
	else if (score > 0)
		printf("The white pieces are ahead!\n");
	else
		printf("The black pieces are ahead!\n");
	printf("Score: %d\n", score);

	return 0;
}

int evaluate_position(char board[BOARD_SIZE][BOARD_SIZE])
{
	char pieces[PIECE_TYPES] =     {'P', 'R', 'N', 'B', 'K', 'Q'};
	int piece_value[PIECE_TYPES] = { 1,   5,   3,   3,   0,   9};

	int white_score = 0;
	int black_score = 0;
	for (int i = 0; i < BOARD_SIZE; ++i) {
		for (int j = 0; j < BOARD_SIZE; ++j) {
			char piece = board[i][j];
			for (int k = 0; k < PIECE_TYPES; ++k)
				if(toupper(piece) == pieces[k]) {
					if(isupper(piece))
						white_score += piece_value[k];
					else
						black_score += piece_value[k];
					break;
				}
		}
	}
	printf("Black score = %d\n", black_score);
	printf("White score = %d\n", white_score);
	return white_score - black_score;
}
