#include "main.h"
/**
  * print_int - function to print int
  * @arg: paramaeter
  * Return: return i
  */
int print_int(va_list arg)
{
	int d = va_arg(arg, int);
	int numb, last = d % 10, digit, exp = 1;
	int i = 1;

	d /= 10;
	numb = d;

	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		d = -d;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp *= 10;
			numb /= 10;
		}
		numb = d;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb -= (digit * exp);
			exp /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
#include "main.h"
/**
  * print_dec - function to print decimal
  * @arg: parameter
  * Return: return i
  */
int print_dec(va_list arg)
{
	int d = va_arg(arg, int);
	int numb, last = d % 10, digit, exp = 1;
	int i = 1;

	d /= 10;
	numb = d;

	if (last < 0)
	{
		_putchar('-');
		numb = -numb;
		d = -d;
		last = -last;
		i++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp *= 10;
			numb /= 10;
		}
		numb = d;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb -= (digit * exp);
			exp /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
