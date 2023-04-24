#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct format - associate conversion specifiers with corresponding functions
 * @specifier: type char pointer to identify which conversion specifier
 * @conversion_func: func pointer to a function that takes a va_list of args
 */
typedef struct format
{
	char *specifier;
	int (*conversion_func)();
} spec_handler;

int _printf(const char *format, ...);
int _vaprintf(const char *format, va_list args);

int print_char(va_list args);
int print_string(va_list args);
int print_decimal(va_list args);

int _putchar(char c);

#endif
