// The following program outline shows only function definitions and variable
// declarations.
// For each of the following scopes, list all variable and parameter names
// visible in that scope,. If there's more than one variable or parameter with
// the same name, indicate which one is visible.
// (a) The f function
// ANSWER: c, b and d. Before the second b is declared, the first b is visible.
// 	   After the b inside f is declared, the external b is no longer
// 	   visible.
// (b) The g function
// ANSWER: global b, parameter a and local c
// (c) The block in which a and d are declared
// ANSWER: global b, g function c, local scope a and d
// (d) The main function
// ANSWER: global b, local c and d

int b, c;

void f(void)
{
	int b, d;
}

void g(int a)
{
	int c;
	{
		int a, d;
	}
}

int main(void)
{
	int c, d;
}
