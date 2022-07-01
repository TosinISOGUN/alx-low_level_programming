#include <stdio.h>

/**
* main -> Write a program that prints the lowercase alphabet in reverse,
* followed by a new line.
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar(10); /* this is an ascii code for new line */
	return (0);
}
