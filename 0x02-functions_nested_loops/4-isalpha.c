#include "main.h"
/**
 * _isalpha - show the abc's
 * @c: get corespanadin ascii to entered char
 * Return: 1 if lower 0 if not
 */
int _isalpha(int c);
{
	if (c > 64 && c < 123)
		return (1);
	else
		return (0);
}
