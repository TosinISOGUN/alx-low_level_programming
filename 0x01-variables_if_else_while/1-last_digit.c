#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -> assign a random number to the variable n each time
* it is executed print the last digit of the number stored
* in the variable n
* Return: Always 0
*/
int main(void)
{
	int n;
	int lastDigit;
	char *resultEnd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit == 0)
		resultEnd = "0";
	else if (lastDigit > 5)
		resultEnd = "greater than 5";
	else
		resultEnd = "less than 6 and not 0";

	printf("Last digit of %d is %d and is %s\n", n, lastDigit, resultEnd);
	return (0);
}
