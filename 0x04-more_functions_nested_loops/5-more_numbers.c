#include "main.h"
/**
 * more_numbers - show the abc's hmm
 * Return: 1 if lower 0 if not hmm
 */
void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar ('0' + (b / 10));
			_putchar ('0' + (b % 10));
		}
		_putchar ('\n');
	}
	return;
}
