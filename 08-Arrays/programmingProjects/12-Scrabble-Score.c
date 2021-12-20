// Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of
// the letters are stored in an array. The array wil have 26 elements,
// corresponding to the 26 letters of the alphabet. For example, element 0 of
// the array will store 1 (because the SCRABBLE value of the letter A is 1),
// element 1 of the array will store 3 (because the SCRABBLE value of the letter
// B is 3), and so forth. As each character of the inpiut word is read, the
// program will use the array to determine the SCRABBLE value of the character.
// Use an array initialiser to set up the array.
//
// ORIGINAL:
// In the SCRABBLE Crossword Game, players form words using small tiles, each
// containing a letter and a face value. The face value varies from one letter
// to another, based on the letter's rarity.
// Here are the face values:
// 1: AEILNORSTU
// 2: DG
// 3: BCMP
// 4: FHVWY
// 5: K
// 8: JX
// 10: QZ
// Write a program that computes the value of a word, by summing the value of
// its letters:
// Enter a word: pitfall
// Scrabble value: 12
// Your program should allow any mixture of lower-case and upper-case letters in
// the word. Hint: Use the toupper library function.

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int score = 0;
	char ch;

	printf("Enter a word: ");
	while((ch = getchar()) != '\n') {
		ch = toupper(ch);
		switch (ch) {
			case 'A': case 'E': case 'I': case 'L': case 'N':
			case 'O': case 'R': case 'S': case 'T': case 'U':
				score += 1;
				break;
			case 'D': case 'G':
				score += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				score += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				score += 4;
				break;
			case 'K':
				score += 5;
				break;
			case 'J': case 'X':
				score += 8;
				break;
			case 'Q': case 'Z':
				score += 10;
				break;
			default:
				printf("Character '%c' not recognised\n", ch);
				break;
		}
	}

	printf("Scrabble value: %d\n", score);

	return 0;
}
