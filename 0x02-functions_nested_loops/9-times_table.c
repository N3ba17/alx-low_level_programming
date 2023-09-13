#include "main.h"
/**
 * times_table - absolute value
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 * Return: doesn't return
*/

void times_table(void)
{
int i, j, cal;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			cal = j * i;
			if (cal >= 10)
			{
				_putchar((cal / 10) + 48);
				_putchar((cal % 10) + 48);
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				if(j != 0)
				{
					_putchar(32);
				}
				_putchar(48 + cal);
				if (j != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
