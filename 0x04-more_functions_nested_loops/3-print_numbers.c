#include "main.h"
/**
 * print_numbers - show the abc's hmm
 * Return: 1 if lower 0 if not hmm
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar ('0' + i);
		i++;
	}
	_putchar ('\n');
}
