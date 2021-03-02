// Is the following if statement legal?
// Answer: Yes
// If so, what does it do when n is equal to 5?
// Answer: It looks at a glance like it might calculate a range, and see if n is
// between 1 and 10. However it will instead evaluate 1-10 as a subtraction
// resulting in -9. As 5 does not equal -9, it will evaluate as false and
// the printf function won't be carried out.

#include<stdio.h>

int main(void)
{
	int n = 5;

	if (n == 1-10)
		printf("n is between 1 and 10\n");

	return 0;
}
