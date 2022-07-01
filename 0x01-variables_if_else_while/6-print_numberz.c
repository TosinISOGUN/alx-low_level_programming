#include <stdio.h>

/**
* main -> a program that prints all single digit numbers of base 10
* starting from 0, followed by a new line.
* Return: Always 0
*/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* This is the ascii code for a new line */
	return (0);
}
