#include "main.h"

/**
 * _vaprintf - Perform formatted output to standard output
 * @format: format string specifying how to format the output
 * @args: varg list containing values to be formatted
 *
 * This function helps the _printf function by reading the format string
 * character by character to call the appropriate helper function
 * to print the argument values formatted
 *
 * Return: number of characters written to standard output
 */
int _vaprintf(const char *format, va_list args)
{
	int len = 0;

	if (!format || !format[0])
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += print_char(args);
					break;
				case 's':
					len += print_string(args);
					break;
				case 'd':
				case 'i':
					len += print_decimal(args);
					break;
				case '%':
					_putchar('%');
					len++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	return (len);
}

/**
 * _printf - prints a formatted string to stdout, similar to printf
 * @format: contains the format specification for the output
 *
 * This function performs formatted output to standard output,
 * It takes a format string and a variable number of arguments,
 * processes the format string and arguments,
 * and outputs the result to standard output.
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
