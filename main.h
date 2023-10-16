#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> 

int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlenc(const char *str);
int print_20(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int printf_pointer(va_list val);
int printf_hex_extra(unsigned long int num);


#endif

