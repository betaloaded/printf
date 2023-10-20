#include "main.h"
/**
  * print_rot13 - function to handle rot13 conver
  * @arg: parma
  * Return: count
  */
int print_rot13(va_list arg)
{
	int i, j, count = 0, k = 0;
	char *s = va_arg(arg, char *);
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				count++;
				k = 1;
				break;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
