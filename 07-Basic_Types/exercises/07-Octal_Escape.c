// For each of the following character escapes, give the equivalent octal
// escape. (Assume that the character set is ASCII.) You may wish to consult
// Appendix E, which lists the numerical codes for ASCII characters.
// (a) \b
//     \10 (backspace)
// (b) \n
//     \12 (newline)
// (c) \r
//     \15 (carriage return)
// (d) \t
//     \11 (horizontal tab)

#include<stdio.h>

int main(void)
{
	//printf("\b");
	printf("\10");

	//printf("\n");
	printf("\12");

	//printf("\r");
	printf("\15");

	//printf("\t");
	printf("\11");

	return 0;
}
