#include <stdio.h>

/**
* main -> a program that prints all possible different
* combinations of two digits.
* Return: Always 0
*/
int main(void)
{
	int ch;
	int n;

	for (ch = 0; ch < 9; ch++)
	{
		for (n = ch + 1; n < 10; n++)
		{
			putchar((ch % 10) + '0');
			putchar((n % 10) + '0');

			if (ch != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar(10); /* this is an ascii code for new line */
	return (0);
}
