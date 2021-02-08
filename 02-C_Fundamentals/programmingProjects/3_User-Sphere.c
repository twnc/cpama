// Modify the program of Programming Project 2 so that it prompts the user to 
// enter the radius of the sphere.
//
// ORIGINAL: Write a program that computes the volume of a sphere with a 10-meter radius,
// using the formula v = 4/3πr³. Write the fraction 4/3 as 4.0f/3.0f. (Try 
// writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation
// operator, so you'll need to multiply r by itself twice to compute r³.

#include<stdio.h>
#define PI (355.0f/113.0f)

int main(void)
{
	float radius = 10.0f;
	float volume = (4.0f/3.0f) * PI * radius * radius * radius;

	printf("A sphere with a radius of %.2f has a volume of %.2f meters cubed.\n", radius, volume);

	return 0;
}
