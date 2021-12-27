// Write a program that reverses the words in a sentence:
//
// Enter a sentence: you can cage a swallow can't you?
// Reversal of sentence: you can't swallow a cage can you?
//
// Hint: Use a loop to read the characters one by one and store them in a
// one-dimensional char array. Have the loop stop at a period, question mark, or
// exclamation point (the "terminating character"), which is saved in a seperate
// char variable. Then use a second loop to search backward for the next-to-last
// word. Repeat until the beginning of the array is reached. Finally, print the
// terminating character.

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	char user_input[100];
	char stop[3] = {'.', '?', '!'};
	char terminating_character = '0';
	int length = 0;

	printf("Enter a sentence: ");
	fflush(stdout);

	// Read input
	char ch;
	while ((ch = getchar()) != '\n') {
		for (int i = 0; i < sizeof(stop)/sizeof(stop[0]); ++i) {
			if (ch == stop[i])
				terminating_character = ch;
		}
		if (terminating_character != '0')
			break;
		else
			user_input[length++] = ch;
	}

	// Print words in reverse order
	printf("Reversal of a sentence: ");
	for (int i = length - 1; i > 0; --i) {
		// Reverse till beginning of last word
		while (user_input[i] != ' ' && i != 0)
			--i;
		int last_position = i;
		if (user_input[i] == ' ')
			++i;
		// Print output then return to i to beginning of word
		while (user_input[i] != ' ' && i != (length)) {
			putchar(user_input[i++]);
		}
		i = last_position;
		// Skip consecutive whitespace
		while (i > 0 && user_input[i - 1] == ' ')
			--i;
		// Print a space if there are more words to come
		if (i != 0)
			putchar(' ');
	}

	// Print terminating character
	if (terminating_character != '0')
		putchar(terminating_character);
	putchar('\n');

	return 0;
}
