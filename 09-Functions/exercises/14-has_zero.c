// The following fuction is supposed to return true if any element of the array
// a has the value 0 and false if all elements are nonzero. Sadly, it contains
// an error. Find the error and show how to fix it.
bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
		else
			return false;
}
