#include "main.h"

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */
int _printf(char *format, ...)
{
	int written = 0, (*structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
        putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype;(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = format[1];
				written += structype(q, pa);
			}
			else if (format[1] != '\0')
			{
				written += putchar('%');
				written += putchar(format[1]);
			}
			else
			{
				written += putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			written += putchar(format[0]);
			format++;
		}
	}
	putchar(-2);
	return (written);
}
