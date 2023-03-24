#include "main.h"
/**
 * _isupper - show the abc's hmm
 * @c: get corespanadin ascii to entered char hmm
 * Return: 1 if lower 0 if not hmm
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
