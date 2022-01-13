// The following (rather confusing) function finds the median of three numbers.
// Rewrite the function so that it has just one return statement.
#include<stdio.h>

double median(double x, double y, double z)
{
	double result = z;
	if (x <= y) {
		if (y <= z)
			result = y;
		else if (x <= z)
			result = z;
		else
			result = x;
	}
	else if (z <= y)
		result = y;
	else if (x <= z)
		result = x;

	return result;
}

int main(void)
{
	double x = 10;
	double y = 14;
	double z = 12;

	printf("%g %g %g\nMedian: %g\n", x, y, z, median(x, y, z));

	return 0;
}
