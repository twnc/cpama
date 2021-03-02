// The following if statement is unnecessarily complicated. Simplify it as much
// as possible. (Hint: The entire statement can be replaced by a single
// assignment.)

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int age = 28;
	bool teenager;

	teenager = (age >= 13 && age <= 19);

	printf("Age: %d\nTeenager: %d\n", age, teenager);

	return 0;
}
