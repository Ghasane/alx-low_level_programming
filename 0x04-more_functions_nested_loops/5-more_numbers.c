#include "main.h"
/**
 * more_numbers - show the abc's hmm
 * Return: 1 if lower 0 if not hmm
 */
void more_numbers(void)
{
	int a = 0;
	int b = 0;

	while (a <= 10)
	{
		while (b <= 14)
		{
			if (b >= 10)
				_putchar ('1');
			_putchar ('0' + (b % 10));
			b++;
		}
		if (a != 10)
			_putchar ('\n');
		b = 0;
		a++;
	}
	return;
}
