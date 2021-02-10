// Write a program that prompts the user to enter a telephone number in the form
// (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
//
// Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
// You entered 404.817.6900
#include<stdio.h>

int main(void)
{
	int num_part1, num_part2, num_part3;
	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf(" (%d )%d -%d", &num_part1, &num_part2, &num_part3);

	printf("You entered %d.%d.%d\n", num_part1, num_part2, num_part3);

	return 0;
}
