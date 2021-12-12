// Write a program that computes the factorial of a positive integer.
//
// Enter a positive integer: 6
// Factorial of 6: 720
//
// (a)
// Use a short variable to store the value of the factorial. What is the largest
// value of n for which the program correctly prints the factorial of n?
// (b)
// Repeat part (a), using an int variable instead.
// (c)
// Repeat part (a), using a long variable instead.
// (d)
// Repeat part (a), using a long long variable instead (If your compiler
// supports the long long type).
// (e)
// Repeat part (a), using a float variable instead.
// (f)
// Repeat part (a), using a double variable instead.
// (g)
// Repeat part (a), using a long double variable instead.
//
// In cases (e)-(g), the program will display a close approximation of the
// factorial, not necessarily the exact value.

#include<stdio.h>
#include<stdbool.h>
#include<limits.h>

int main(void)
{
	int input, factorial = 1;
	printf("Enter a positive integer: ");
	fflush(stdout);

	scanf("%d", &input);
	for(int i = input; i > 0; --i)
		factorial *= i;

	printf("Factorial of %d: %d\n", input, factorial);

	// Calculate maximum accurate short factorial
	short short_counter, short_factorial = 1, new_short_factorial = 1;
	for(short i = 1; i < SHRT_MAX; ++i)
	{
		new_short_factorial *= i;
		if(new_short_factorial/i != short_factorial)
			break;
		short_factorial = new_short_factorial;
		short_counter = i;
	}
	printf("Maximum short factorial is ");
	printf("factorial of %hd: %hd\n", short_counter, short_factorial);

	// Calculate maximum accurate int factorial
	int int_counter, int_factorial = 1, new_int_factorial = 1;
	for(int i = 1; i < INT_MAX; ++i)
	{
		new_int_factorial *= i;
		if(new_int_factorial/i != int_factorial)
			break;
		int_factorial = new_int_factorial;
		int_counter = i;
	}
	printf("Maximum int factorial is ");
	printf("factorial of %d: %d\n", int_counter, int_factorial);

	// Calculate maximum accurate long factorial
	long long_counter, long_factorial = 1, new_long_factorial = 1;
	for(long i = 1; i < LONG_MAX; ++i)
	{
		new_long_factorial *= i;
		if(new_long_factorial/i != long_factorial)
			break;
		long_factorial = new_long_factorial;
		long_counter = i;
	}
	printf("Maximum long factorial is ");
	printf("factorial of %ld: %ld\n", long_counter, long_factorial);

	// Calculate maximum accurate long long factorial
	long long long_long_counter, long_long_factorial = 1;
	long long new_long_long_factorial = 1;
	for(long long i = 1; i < LLONG_MAX; ++i)
	{
		new_long_long_factorial *= i;
		if(new_long_long_factorial/i != long_long_factorial)
			break;
		long_long_factorial = new_long_long_factorial;
		long_long_counter = i;
	}
	printf("Maximum long long factorial is ");
	printf("factorial of ");
	printf("%lld: %lld\n",long_long_counter, long_long_factorial);

	// Calculate maximum accurate float factorial
	float float_counter, float_factorial = 1, new_float_factorial = 1;
	for(float i = 1; true; ++i)
	{
		new_float_factorial *= i;
		if((new_float_factorial/i) != float_factorial)
			break;
		float_factorial = new_float_factorial;
		float_counter = i;
	}
	printf("Maximum float factorial is ");
	printf("factorial of %g: %g\n", float_counter, float_factorial);

	// Calculate maximum accurate double factorial
	double double_counter, double_factorial = 1, new_double_factorial = 1;
	for(double i = 1; true; ++i)
	{
		new_double_factorial *= i;
		if((new_double_factorial/i) != double_factorial)
			break;
		double_factorial = new_double_factorial;
		double_counter = i;
	}
	printf("Maximum double factorial is ");
	printf("factorial of %g: %g\n", double_counter, double_factorial);

	// Calculate maximum accurate long double factorial
	long double long_double_counter, long_double_factorial = 1, new_long_double_factorial = 1;
	for(long double i = 1; true; ++i)
	{
		new_long_double_factorial *= i;
		if((new_long_double_factorial/i) != long_double_factorial)
			break;
		long_double_factorial = new_long_double_factorial;
		long_double_counter = i;
	}
	printf("Maximum long double factorial is ");
	printf("factorial of %Lg: %Lg\n", long_double_counter, long_double_factorial);

	return 0;
}
