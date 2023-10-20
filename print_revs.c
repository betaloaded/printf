#include "main.h"

/**
 * printf_revs - function that prints a str in reverse
 * @val: arguments
 *
 * Return: the string
 */
int printf_revs(va_list val)
{

	char *s = va_arg(val, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
