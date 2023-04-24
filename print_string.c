#include "main.h"

/**
 * print_string - iterates through the string and prints each character
 * @args: arguments
 * Return: number of characters printed as an int
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int len = 0;

	while (*s != '\0')
	{
		_putchar(*s++);
		len++;
	}
	return (len);
}
