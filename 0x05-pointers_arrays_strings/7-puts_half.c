#include "main.h"
/**
 * puts_half - does something ...
 * @str: is some engtry
 */
void puts_half(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n + 1) / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
