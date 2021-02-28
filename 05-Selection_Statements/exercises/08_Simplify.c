// The following if statement is unnecessarily complicated. Simplify it as much
// as possible. (Hint: The entire statement can be replaced by a single
// assignment.)

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int age = 28;
	bool teenager;

	if (age >= 13)
		if (age <= 19)
			teenager = true;
		else
			teenager = false;
	else if (age < 13)
		teenager = false;

	printf("Age: %d\nTeenager: %d\n", age, teenager);

	return 0;
}
