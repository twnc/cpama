// Write a program that counts the number of vowels (a, e, i, o, and u) in a
// sentence:
//
// Enter a sentence: And that's the way it is.
// Your sentence contains 6 vowels.

#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int vowels = 0;

	printf("Enter a sentence: ");
	char ch = ' ';
	while(ch != '\n') {
		ch = tolower(getchar());
		switch(ch) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				vowels++;
		}
	}
	printf("You sentence contains %d vowels.\n", vowels);

	return 0;
}
