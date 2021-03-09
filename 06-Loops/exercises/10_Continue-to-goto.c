// Show how to replace a continue statement by an equivalent goto statement

#include<stdio.h>

int main(void)
{
	int i = 0;
	// Print even numbers up to 10;
	while(i < 10) {
		++i;
		if(i%2 != 0)
			continue;
		printf("%d\n", i);
	}

	return 0;
}
