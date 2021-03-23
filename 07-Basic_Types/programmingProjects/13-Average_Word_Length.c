// Write a program that calculates the average word length for a sentence:
//
// Enter a sentence: It was deja vu all over again.
// Average word length: 3.4

#include<stdio.h>

int main(void)
{
	int words = 0, characters = 0;
	char ch;

	printf("Enter a sentence: ");

	ch = getchar();
	while(ch != '\n') {
		// Skip white space
		while(ch == ' ')
			ch = getchar();
		// Check if new line or new word
		if(ch != '\n')
			words++;
		// Count letters of new word
		while(ch != '\n' && ch != ' ') {
			characters++;
			ch = getchar();
		}
	}

	//printf("Word count: %d\nCharacter count: %d\n", words, characters);
	printf("Average word length: %.1f\n", (float) characters / words);

	return 0;
}
