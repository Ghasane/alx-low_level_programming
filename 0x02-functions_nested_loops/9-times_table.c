#include "main.h"
/**
 * void times_table - show the abc'
 * Return: 1 if lower 0 if not
 */
void times_table(void)
{
	int a = 0;
	int b = 0;
	int x = 0;
	int r = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			r = (a * b) / 10;
			x = (a * b) % 10;
			if (r != 0)
				_putchar('0' + r);
			else
				_putchar(' ');
			_putchar('0' + x);
			if (b == 9)
				break;
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar('\n');
		a++;
		b = 0;
	}
		return;
}
