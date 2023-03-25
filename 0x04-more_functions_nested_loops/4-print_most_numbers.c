#include "main.h"
/**
 * print_most_numbers - show the abc's hmm
 * Return: 1 if lower 0 if not hmm
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar ('0' + i);
		i++;
	}
	_putchar ('\n');
}
