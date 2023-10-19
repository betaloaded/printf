#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "_putchar.c"

int _putchar(char c);
int print_int(va_list arg);
int print_dec(va_list arg);
int print_unsigned(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_Hex(va_list arg);
int print_rot13(va_list arg);
#endif
