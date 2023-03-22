#include "main.h"
/**
 * print_times_table - show the abc'
 * @n: entered value
 * Return: 1 if lower 0 if not
 */
void print_times_table(int n)
{
	int a = 0;
	int b = 0;
	int x = 0;
	int r = 0;

	if(n > 15 && n < 0)
		return;
	while (a < n)
	{
		while (b <= n)
		{
			r = (a * b) / 10;
			x = (a * b) % 10;
			if (r != 0)
				_putchar('0' + r);
			else if (b != 0)
				_putchar(' ');
			_putchar('0' + x);
			if (b == n)
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
