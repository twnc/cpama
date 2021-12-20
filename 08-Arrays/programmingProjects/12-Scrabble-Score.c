// Modify Programming Project 5 from Chapter 7 so that the SCRABBLE values of
// the letters are stored in an array. The array will have 26 elements,
// corresponding to the 26 letters of the alphabet. For example, element 0 of
// the array will store 1 (because the SCRABBLE value of the letter A is 1),
// element 1 of the array will store 3 (because the SCRABBLE value of the letter
// B is 3), and so forth. As each character of the input word is read, the
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
	int letter_values[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3,
		10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	printf("Enter a word: ");
	fflush(stdout);
	while((ch = getchar()) != '\n') {
		ch = toupper(ch);
		if (ch >= 'A' && ch <= 'Z')
			score += letter_values[ch - 'A'];
		else
			printf("Character '%c' not recognised\n", ch);
	}

	printf("Scrabble value: %d\n", score);

	return 0;
}
