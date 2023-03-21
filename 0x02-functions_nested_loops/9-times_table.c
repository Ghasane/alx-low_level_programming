#include "main.h"
/**
 * void times_table - show the abc'
 * Return: 1 if lower 0 if not
 */
void times_table(void);
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
