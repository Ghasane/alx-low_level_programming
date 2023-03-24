#include "main.h"
/**
 * isupper  - show the abc's
 * @c: get corespanadin ascii to entered char
 * Return: 1 if lower 0 if not
 */
int _isupper(int c)
{

	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
