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

for (ch = 48; ch <= 57; ch++)
{
	for (n = 49; n <= 57; n++)
	{
		for (n = 50; n <= 57; n++)
		{
			if (n > ch && m > n)
		}
		putchar(ch);
		putchar(n);
		putchar(m);
		if (ch != 55 || n != 56 || m != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
}
putchar(10); /* This is an ascii code for a new line */
return (0);
}
