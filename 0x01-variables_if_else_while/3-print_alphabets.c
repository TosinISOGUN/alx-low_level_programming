#include <stdio.h>

/**
* main -> a program that prints the alphabet in lowercase,
* and then in uppercase, followed by a new line.
* Return: Always 0
*/
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{

		putchar(ch);
	}
	putchar(10); /* this is ascii code for new line */

	return (0);
}
