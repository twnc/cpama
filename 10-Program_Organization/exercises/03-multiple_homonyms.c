// Suppose that a program has only one function(main). How many different
// variables named i could this program contain?
// ANSWER: It could have one parameter named i or a local scope i, and
// an infinite number of subscopes each with a corresponding i.

#include<stdbool.h>

int main(void)
{
	// Could have a parameter named i instead of this, but not both
	int i = 3;
	if(true) {
		int i;
	} else {
		int i;
	}

	{
		int i;
		{
			int i;
			{
				int i;
			}
			{
				int i;
			}

		}
	}

	return 0;
}
