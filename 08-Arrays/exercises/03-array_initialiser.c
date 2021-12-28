// Write a declaration of an array named weekend containing seven bool values.
// Include an initializer that makes the first and last values true: all other
// values should be false.

#include<stdio.h>
#include<stdbool.h>

#define SIZE ((int) (sizeof(weekend) / sizeof(weekend[0])))

int main(void)
{
	bool weekend[] = {true, [6] = true};

	for (int i = 0; i < SIZE; ++i) {
		if (weekend[i])
			printf("True!\n");
		else
			printf("False!\n");
	}

	return 0;
}
