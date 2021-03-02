// Is the following if statement legal?
// If so, what does it do when n is equal to 0?
//
// Answer: Yes it is legal. The >= and <= operators have equal precedence and
// have left associativity. This means that the if condition will be evaluated
// as if it were if ((n >= 1) <= 10). Whatever the value of n, the statement
// will always evaluate to true. If (n >= 1) is true, it will evaluate to 1,
// otherwise it will evaluate to 0. Both of these numbers are less than 10, so
// in this case the if statement will always be true.

#include<stdio.h>

int main(void)
{
	int n = 0;

	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	return 0;
}
