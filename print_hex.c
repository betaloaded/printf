#include "main.h"
/**
  * print_hex - function to convert unsigned int to hex
  * @arg: param
  * Return: count
  */
int print_hex(va_list arg)
{
	int i, count = 0;
	unsigned int numb = va_arg(arg, int);
	unsigned int temp = numb;
	int *array;

	while (numb / 16 != 0)
	{
		numb /= 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= count; i--)
	{
		if (array[i] > 9)
		{
			array[i] += 39;
		}
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
