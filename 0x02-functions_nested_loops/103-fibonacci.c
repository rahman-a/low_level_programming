#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int i;
	long int sq1 = 1, sq2 = 2, sum = 0, evenNumbers = 0;

	for (i = 0; i < 4000000; i++)
	{
		sum = sq1 + sq2;
		sq1 = sq2;
		sq2 = sum;

		if (sum % 2 == 0)
			evenNumbers += sum;
	};
	printf("%ld\n", evenNumbers);
	return (0);
}
