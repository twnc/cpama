// The following fuction is supposed to return true if any element of the array
// a has the value 0 and false if all elements are nonzero. Sadly, it contains
// an error. Find the error and show how to fix it.
#include<stdio.h>
#include<stdbool.h>
bool has_zero(int a[], int n)
{
	int i;

	// Previously every time this loop would run, it would only check the
	// first result. Removing the else, and moving the 'return false' to the
	// end means that it will only return false if all items are checked and
	// none of them returned true.
	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
	return false;
}

int main(void)
{
	int a[] = {1, 1, 1, 0};

	if (has_zero(a, 4))
		printf("True!\n");
	else
		printf("False!\n");

	return 0;
}
