#include "main.h"

/**
 * jack_bauer - prints every minit of the day
 */
void jack_bauer(void)
{
	int hour, minute;
	{
	for  (minute = 0; minute <= 59; minute++)
	{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((munite / 10) + '0');
		_putchar((munite % 10) + '0');
		_putchar('\n')
	}
	}
}