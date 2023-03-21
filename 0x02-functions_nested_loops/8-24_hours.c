#include "main.h"
/**
 * jack_bauer - show the abc's
 * @c: get corespanadin ascii to entered char
 * Return: 1 if lower 0 if not
 */
void jack_bauer(void)
{
	int h=0;
	int h1;
	int m=0;
	int m1=0;

	while(h < 3)
	{
		while(h1 < 10)
		{
			while(m < 6)
			{
				while(m1 < 10)
				{
					_putchar(48 + h);
					_putchar(48 + h1);
					_putchar(':');
					_putchar(48 + m);
					_putchar(48 + m1);
					if (h == 2 && h1 == 3 && m == 5 && m1 == 9)
						return;
					m1++;
				}
				m++;
				m1 = 0;
			}
			h1++;
			m = 0;
			m1 = 0;
		}
		h++;
		h1 = 0;
		m = 0;
		m1 = 0;
	}
		return;
}
