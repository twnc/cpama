// What does the following statement print if i has the value 17? What does it
// print if i has the value -17?
// Answer: This statement will return all positive numbers as they were. If a
// number is negative, it will return it as a positive number (by double
// negating it). So both 17 and -17 will be returned as 17.

#include<stdio.h>

int main(void)
{
	int i = 17;
	printf("%d\n", i >= 0 ? i : -i);

	i = -17;
	printf("%d\n", i >= 0 ? i : -i);

	return 0;
}
