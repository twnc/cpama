// Consider the following "mystery" function:
// void pb(int n)
// {
// 	if (n != 0) {
// 		pb(n / 2);
// 		putchar('0' + n % 2);
// 	}
// }
// Trace the execution of the function by hand. Then write a program that calls
// the function, passing a number entered by the user. What does the function
// do?
//
// ANSWER:
// pb(5)
//   pb(2)
//     pb(1)
//       pb(0)
//     putchar('1');
//   putchar('0');
// putchar('1');
// void pb(int n) prints out n as a binary
#include<stdio.h>

void pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}

int main(void)
{
	int user_input;
	printf("Please enter an integer:\n");
	scanf("%d", &user_input);
	printf("%d in binary is ", user_input);
	pb(user_input);
	putchar('\n');
	return 0;
}
