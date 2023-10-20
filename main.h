#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct check - structure containing
 * @id: the location and method to translate data to characters.
 * @func: print function for specific type.
 *
 * Return: int
 */
typedef struct format
{
	char *id;
	int (*func)();
} check;
int printf_revs(va_list val);
int printf_char(va_list val);
int _putchar(char ch);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list arg);
int print_dec(va_list arg);
int print_binary(va_list val);
int print_unsigned(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_Hex(va_list arg);
int printf_HEX_aux(unsigned int num);
int print_exclusive_string(va_list val);
int print_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int print_rot13(va_list arg);

#endif
