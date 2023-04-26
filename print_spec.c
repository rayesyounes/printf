#include "main.h"

/**
 * print_int - prints integers from va_list
 * @list: list of integers to be printed
 * Return: number of characters printed
 */
int print_int(va_list list)
{
	int num = va_arg(list, long);
	char buffer[50];

	_itoa(num, buffer);
	return (_puts(buffer));
}

/**
 * print_char - prints a character from va_list
 * @list: list of args
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_str - prints a string from va_list
 * @list: containins string to be printed
 * Return: number of characters printed
 */

int print_str(va_list list)
{
	int i = 0;
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";

	for (; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_perc - prints percent sign
 * @list: list of args
 * Return: number of characters printed
 */

int print_perc(va_list list)
{
	(void)(list);
	_putchar('%');
	return (1);
}
