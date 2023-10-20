#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	check c[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", print_37}, {"%d", print_dec},
		{"%i", print_int}, {"%r", printf_revs},
		{"%R", print_rot13}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_oct},
		{"%x", print_hex}, {"%X", print_Hex},
		{"%S", print_exclusive_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (c[j].id[0] == format[i] && c[j].id[1] == format[i + 1])
			{
				len += c[j].func(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
