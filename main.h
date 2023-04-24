#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


int _printf(const char *format, ...);
int _vaprintf(const char *format, va_list args);

int _putchar(char c);

#endif
