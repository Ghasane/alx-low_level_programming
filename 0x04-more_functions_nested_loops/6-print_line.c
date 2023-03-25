#include "main.h"

/**
 * print_line - prints the character "_" n times to draw a line
 * @n: number of_ characters to draw
 */

void print_line(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
		_putchar('_');

	_putchar('\n');
}
