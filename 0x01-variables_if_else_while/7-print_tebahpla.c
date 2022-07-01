#include <stdio.h>

/**
* main -> Write a program that prints the lowercase alphabet in reverse,
* followed by a new line.
* Return: Always 0
*/
int main(void)
{
	char ch;

	for (ch = '122'; ch >= '97'; ch++)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for new line */
	return (0);
}
