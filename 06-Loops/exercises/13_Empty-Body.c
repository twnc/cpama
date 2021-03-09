// Rewrite the following loop so that its body is empty:
//
// for (n = 0; m > 0; n++)
//    m /= 2;

#include<stdio.h>

int main(void)
{
	int n, m = 10;

	for (n = 0; m > 0; n++, m /= 2)
		;

	printf("n = %d\nm = %d\n", n, m);

	return 0;
}
