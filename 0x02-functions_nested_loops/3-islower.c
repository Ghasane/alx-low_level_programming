#include "main.h"
/**
 * _islower - show the abc's
 * @c: get corespanadin ascii to entered char
 * Return: 1 if lower 0 if not
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
