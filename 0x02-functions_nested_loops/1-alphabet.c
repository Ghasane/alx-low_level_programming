void print_alphabet(void)
{
	char n='a';

	while (n < 'z')
	{
	_putchar(n);
	n++;
	if (n == 'z')
	_putchar('\n');
	}
	return ;
}
