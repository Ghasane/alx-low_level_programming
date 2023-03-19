#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 1;

	while (n < 10)
	{
		while (a < 10)
		{
			while (b < 10)
			{
				while (c < 10)
				{
					putchar(48 + n);
					putchar(48 + a);
					putchar(" ");
					putchar(48 + b);
					putchar(48 + c);
					if (n == 9 && a == 8)
					{
						putchar('\n');
						return (0);
					}
				putchar(',');
				putchar(' ');
				c++;
				}
				b++;
				c = 0;
			}
			a++;
			b = n;
			c = a + 1;
		}
		n++;
		b = n;
		c = a + 1;
		a = 0;
	}
	return (0);
}
