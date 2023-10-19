#include "main.h"
/**
 * print_binary - converts to binary
 * @val: argument
 * Return: integer
 */

int print_binary(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & number);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	 return (cont);
}


