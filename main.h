#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_hex(unsigned int n, unsigned int hex, char alpha);
int print_x(va_list hexa);
int print_X(va_list hexa);
int print_rot13(va_list R);
#endif
