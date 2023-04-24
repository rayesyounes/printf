#include "main.h"

/**
 * print_string - iterates through the string and prints each character
 * @args: arguments
 * Return: number of characters printed as an int
 */
int print_string(va_list args)
{
	int i;
	char *s;

	s = va_arg(list, char *);
	if (!s)
		s = "(null)";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}
