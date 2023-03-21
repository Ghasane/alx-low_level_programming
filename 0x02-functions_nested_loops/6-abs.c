#include "main.h"
/**
 * _abs - show the abc's
 * @n: get nummber
 * Return: 1 if pos 0 if 0 and -1 if neg
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
