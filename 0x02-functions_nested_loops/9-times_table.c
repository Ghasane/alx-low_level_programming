#include "main.h"
/**
 * jack_bauer - show the abc's
 * Return: 1 if lower 0 if not
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;

	while (a < 9)
	{
		while (b < 9)
		{
			_putchar('0' + a * b);
			_putchar(',');
			_putchar(' ');
			b++;
			if (b == 9)
				_putchar('0' + a * b);
		}
		_putchar('\n');
		a++;
	}
		return;
}
