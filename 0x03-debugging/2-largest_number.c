#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @var1: first integer
 * @var2: second integer
 * @var3: third integer
 *
 * Created by: ALX
 * Modified by: TosinISOGUN
 * Date modified: 6th July, 2022
 *
 * Return: largest number
 */

int largest_number(int var1, int var2, int var3)
{
	int largest;

	if (var1 > var2 && var1 > var3)
		largest = var1;
	else if (var2 > var1 && var2 > var3)
		largest = var2;
	else if (var3 > var2)
		largest = var3;
	else
		largest = var2;

	return (largest);
}
