#include "main.h"

/**
 * _vaprintf - Perform formatted output to standard output
 * @format: format string specifying how to format the output
 * @args: varg list containing values to be formatted
 * 
 * Return : number of characters written to standard output
 */
int _vaprintf(const char *format, va_list args) 
{
	int len = 0;
	while (*format) 
	{
		if (*format == '%') 
		{
			switch (*++format) 
			{
				case 'c':
					putchar(va_arg(args, int));
					len++;
					break;
				case 's':
					{
						char *s = va_arg(args, char*);
						while (*s != '\0')
						{
						 putchar(*s++);
							 len++;
						}
						break;
					}
				case '%':
					  putchar('%');
					  len++;
					  break;
			}
		} 
		else 
		{
			putchar(*format);
			len++;
		}
		format++;
	}
	return (len);
}


/*
 * _printf - prints a formatted string to stdout, similar to printf
 * @format: contains the format specification for the output
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...) 
{
	int len;
	va_list args;
	va_start(args, format);

	len = _vaprintf(format, args);

	va_end(args);

	return (len);
}
