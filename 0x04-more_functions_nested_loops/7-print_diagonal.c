#include "main.h"

/**
 * print_diagonal - prints character "\" n time
 * @n: number of character to draw
 */

void print_diagonal(int n)
{
	int l;
	int s;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			for (s = 1; s < l; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
