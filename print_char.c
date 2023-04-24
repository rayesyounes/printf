#include "main.h"

/**
 * print_char - outputs char to the standard output
 * @args: arguments
 * Return: 1 ( to indicate that one character has been printed)
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

