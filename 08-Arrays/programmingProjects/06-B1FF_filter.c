// The prototypical Internet newbie is a fellow named B1FF, who has a unique way
// of writing messages. Here's a typical B1FF communique:
// H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Write a "B1FF filer" that reads a message entered by the user and translates
// it into B1FF-speak:
// Enter message: Hey dude, C is rilly cool
// In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
// Your program should convert the message to upper-case letters, substitute
// digits for certain letters (A->4, B->8, E->3, I->1, O->0, S->5), and then
// append 10 or so exclamation marks.
// Hint: Store the original message in an array of characters, then go back
// through the array, translating and printing the characters one by one.
#include<stdio.h>
#include<ctype.h>

#define INPUT_LENGTH 100
#define SIZE ((int) (sizeof(input_message) / sizeof(input_message[0])))

int main(void)
{
	char input_message [INPUT_LENGTH];

	// Take user input and store it in upper-case
	printf("Enter message: ");
	fflush(stdout);
	for (int i = 0; i < SIZE; ++i) {
		input_message[i] = toupper(getchar());
		if (input_message[i] == '\n')
			break;
	}

	// Print user input as B1ff-speak
	printf("In B1ff-speak: ");
	for (int i = 0; i < SIZE && input_message[i] != '\n'; ++i) {
		switch (input_message[i]) {
		case 'A':
			putchar('4');
			break;
		case 'B':
			putchar('8');
			break;
		case 'E':
			putchar('3');
			break;
		case 'I':
			putchar('1');
			break;
		case 'O':
			putchar('0');
			break;
		case 'S':
			putchar('5');
			break;
		default:
			putchar(input_message[i]);
			break;
		}
	}
	printf("!!!!!!!!!!\n");
	return 0;
}
