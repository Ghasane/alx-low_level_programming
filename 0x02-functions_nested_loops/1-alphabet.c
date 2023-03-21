#include "main.h"
/**
 * main - the entrance to whatever
 * Return: 0 return success
*/
void print_alphabet(void);
{
	char n='a';

	while (n < 'z')
	{
	_putchar(n);
	if (n == 'z')
	_putchar('\n');
	}
	return (0);
}
