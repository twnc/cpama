// (C99) Repeat Exercise 3, but this time use a designated initializer. Make
// the initializer as short as possible.
// ORIGINAL:
// Write a declaration of an array named weekend containing seven bool values.
// Include an initializer that makes the first and last values true: all other
// values should be false.

#include<stdio.h>
#include<stdbool.h>

#define SIZE ((int) (sizeof(weekend) / sizeof(weekend[0])))

int main(void)
{
	bool weekend[] = {1, [6] = 1};

	for (int i = 0; i < SIZE; ++i) {
		if (weekend[i])
			printf("True!\n");
		else
			printf("False!\n");
	}

	return 0;
}
