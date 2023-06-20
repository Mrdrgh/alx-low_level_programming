#include "main.h"
/**
 * jack_bauer - print all minutes of the day
*/
void jack_bauer(void)
{
	int minutes, hours;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours <= 9)
			{
				_putchar('0');
				_putchar(hours + '0');
			}
			else
			{
				_putchar((int) (hours / 10) + '0');
				_putchar(hours % 10 + '0');
				_putchar(':');
			}
			if (minutes <= 9)
			{
				_putchar('0');
				_putchar(minutes + '0');
			}
			else
			{
				_putchar((int) (minutes / 10) + '0');
				_putchar(minutes % 10);
			}
		}
		_putchar('\n');
	}
}
