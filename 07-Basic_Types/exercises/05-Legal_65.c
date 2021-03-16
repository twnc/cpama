// Which one of the following is not a legal way to write the number 65? (Assume
// the character set is ASCII.)
// (a) 'A'
// LEGAL
// (b) 0b1000001
// ILLEGAL
// Curiously this compiles and runs. I tested it under various settings with
// both GNU and Clang, and it functions with both on default settings with all
// versions of C from C89 onwards. When I compiled it with -pedantic it pointed
// out that binary integer literals are a GNU extension. Though as it worked
// with both on default settings, it seems to be widely supported. After a
// little Googling I found it is also legal in C++ since C++14.
// (c) 0101
// LEGAL
// (d) 0x41
// LEGAL

// Test answers
#include<stdio.h>

int main(void)
{
	printf("%d\n", 'A');
	printf("%d\n", 0b1000001);
	printf("%d\n", 0101);
	printf("%d\n", 0x41);

	return 0;
}
