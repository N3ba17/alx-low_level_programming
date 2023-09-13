#include "main.h"
/**
 * jack_bauer - absolute value
 *
 * Description - 3-islower 10 check if letter is lower case
 *
 * Return: doesn't return
*/

void jack_bauer(void)
{
int h, m, holder;
	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			holder = h / 10;
			_putchar(holder + 48);
			holder = h % 10;
			_putchar(holder + 48);
			_putchar(45);
			holder = m / 10;
			_putchar(holder + 48);
			holder = m % 10;
			_putchar(holder + 48);
			_putchar('\n');
		}
	}
}
