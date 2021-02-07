// Write a program that declares several int and float variables - without
// initialising them - and then prints their values. Is there any pattern
// to the values? (Usually there isn't.)
// ANSWER: All float values came back as 0.0000. int x was always a positive
// 9 digit integer, int y was always 32766, int z was always a negative 9
// digit integer. This was while compiled on MacOS, with both gcc and clang
#include<stdio.h>

int main(void)
{
	int x, y, z;
	float a, b, c;

	// Print uninitialised ints
	printf("int x = %d\n", x);
	printf("int y = %d\n", y);
	printf("int z = %d\n", z);

	// Print unitialised floats
	printf("float a = %f\n", a);
	printf("float b = %f\n", b);
	printf("float c = %f\n", c);

	return 0;
}
