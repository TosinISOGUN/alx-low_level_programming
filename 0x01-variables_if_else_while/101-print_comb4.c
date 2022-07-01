#include <stdio.h>

/**
* main -> a program that prints all possible different
* combinations of three digits.
* Return: Always 0
*/
int main(void)
{
int ch;
int n;
int m;

for (ch = 0; ch < 8; ch++)
{
	for (n = ch + 1; n < 9; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
		putchar((ch % 10) + '0');
		putchar((n % 10) + '0');
		putchar((m % 10) + '0');

		if (ch != 7)
		{
			putchar(44);
			putchar(32);
		}
		}
	}
}
putchar(10); /* This is an ascii code for a new line */
return (0);
}
