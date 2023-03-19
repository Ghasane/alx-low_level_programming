#include <stdio.h>
/**
* main - enter here more desc
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0;
	int a = 1;

		while (n < 10)
		{
			while (a < 10)
			{
			putchar(48 + n);
			putchar(48 + a);
			if (n == 8)
			{
				putchar('\n');
				return(0);
			}
			putchar(',');
			putchar(' ');
			a++;
			}
			n++;
			a=n + 1;
		}
	return (0);
}
