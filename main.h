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
	int (*conversion_func)(va_list);
} spec_handler;

int _printf(const char *format, ...);
int _printf_assist(const char *format, va_list args);

int (*print_case(const char *format))(va_list);

int print_char(va_list args);
int print_str(va_list list);
int print_perc(va_list list);
int print_int(va_list list);

unsigned int _strlen(char *s);
void reverse_str(char s[]);
void _itoa(long n, char s[]);

int _putchar(char c);
int _puts(char *str);

#endif
