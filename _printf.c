#include "main.h"

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
	va_list args;
	int len;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	len = _printf_assist(format, args);
	va_end(args);

	return (len);
}

/**
 * _printf_assist - Perform formatted output to standard output
 * @format: format string specifying how to format the output
 * @args: varg list containing values to be formatted
 *
 * This function helps the _printf function by reading the format string
 * to call a helper function to print the argument values formatted
 *
 * Return: number of characters written to standard output
 */
int _printf_assist(const char *format, va_list args)
{
	int (*func_ptr)(va_list);
	int i, len;

	i = 0;
	len = 0;
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			while (format[i + 1] == ' ')
			{
				if (format[i + 2] == '\0')
					return (-1);
				i++;
			}

			func_ptr = print_case(&format[++i]); /* for invalid formats */

			if (func_ptr != NULL)

				len += func_ptr(args);

			else

				len += _putchar('%') + _putchar(format[i]);

		}
		else
			len += _putchar(format[i]);
	}

	return (len);
}
