// Modify Programming Project 16 from Chapter 8 so that it includes the
// following functions:
//
// void read_word(int counts[26]);
// bool equal_array(int counts1[26], int counts2[26]);
//
// main will call read_word twice, once for each of the two words entered by the
// user. As it reads a word, read_word will use the letters in the word to
// update the counts array, as described in the original project. (main will
// declare two arrays, one for each word. These arrays are used to track how
// many times each letter occurs in the words.) main will then call equal_array,
// passing it the two arrays. equal_array will return true if the elements in
// the two arrays are identical (indicating that the wordsa are anagrams) and
// false otherwise.
//
// ORIGINAL:
// Write a program that tests whether two words are anagrams (permutations of
// the same letters):
//
// Enter first word: smartest
// Enter second word: mattress
// The words are anagrams.
//
// Enter first word: dumbest
// Enter second word: stumble
// The words are not anagrams.
//
// Write a loop that reads the first word, character by character, using an array
// of 26 integers to keep track of how many times each letter has been seen.
// (For example, after the word smartest has been read, the array should contain
// the values 1 0 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0, reflecting
// the fact that smartest contains one a, one e, one m, one r, two s's and two
// t's.) Use another loop to read the second word, except this time decrementing
// the corresponding array element as each letter is read. Both loops should
// ignore any characters that aren't letters, and both should treat upper-case
// letters in the same way as lower-case letters. After the second word has been
// read, use a third loop to check whether all the elements in the array are
// zero. If so, the words are anagrams. Hint: You may wish to use functions from
// <ctype.h>, such as isalpha and tolower.

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define ALPHABET 26

void read_word(int counts[ALPHABET]);
bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET]);

int main(void)
{
	bool anagram = true;
	int word1[ALPHABET] = {0};
	int word2[ALPHABET] = {0};

	// Count letters in first word
	printf("Enter first word: ");
	read_word(word1);

	// Count letters in second word
	printf("Enter second word: ");
	read_word(word2);

	// Check for differences
	anagram = equal_array(word1, word2);

	// Print results
	if (anagram)
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}

// Counts occurences of each letter in alphabet
void read_word(int counts[ALPHABET])
{
	char ch;
	while ((ch = tolower(getchar())) != '\n')
		if (isalpha(ch))
			counts[ch - 'a']++;
}
bool equal_array(int counts1[ALPHABET], int counts2[ALPHABET])
{
	bool equal = true;
	for (int i = 0; i < ALPHABET; ++i)
		if (counts1[i] != counts2[i]) {
			equal = false;
			break;
		}
	return equal;
}
