// Write a program that tests whether two words are anagrams (permtuations of
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
// zero. If so. the words are anagrams. Hint: You ay wish to use functions from
// <ctype.h>, such as isalpha and tolower.

#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main(void)
{
	return 0;
}
