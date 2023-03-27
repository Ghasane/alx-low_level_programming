#include "main.h"
/**
 * puts2 - does something ...
 * @str: is some engtry
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n = n + 1;
	}
	_putchar('\n');
}
