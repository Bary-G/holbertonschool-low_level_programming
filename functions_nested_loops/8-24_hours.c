#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 */
void jack_bauer(void)
{
	int hour, minute;
	char digits[] = "0123456789";

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(digits[hour / 10]);
			_putchar(digits[hour % 10]);
			_putchar(':');
			_putchar(digits[minute / 10]);
			_putchar(digits[minute % 10]);
			_putchar('\n');
		}
	}
}
