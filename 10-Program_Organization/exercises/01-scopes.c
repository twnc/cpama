// The following program outline shows only function definitions and variable
// declarations.
// For each of the following scopes, list all variable and parameter names
// visible in that scope:
// (a) The f function
// ANSWER: a, b and c
// (b) The g function
// ANSWER: a and d
// (c) The block in which e is declared
// ANSWER: a, d, e
// (d) The main function
// ANSWER: a and f

int a;

void f(int b)
{
	int c;
}
void g(void)
{
	int d;
	{
		int e;
	}
}

int main(void)
{
	int f;
}
