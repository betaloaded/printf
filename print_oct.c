#include "main.h"
/**
  * print_oct - function to change unsigned int to oct
  * @arg: - param
  * Return: return count
  */
int print_oct(va_list arg)
{
	int i, count = 0;
	unsigned int numb = va_arg(arg, unsigned int);
	unsigned int temp = numb;
	int *array;

	while (numb / 8 != 0)
	{
		numb /= 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= count; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
