#include "main.h"

/**
 * more_numbers - print all numberss from 1 to 14
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if ((i / 10) == 0)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
