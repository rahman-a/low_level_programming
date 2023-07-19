#include "main.h"

/**
 * jack_bauer - a function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * Return: (void)
*/

void jack_bauer(void)
{
	int hr = 0, min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		};
	};
}
