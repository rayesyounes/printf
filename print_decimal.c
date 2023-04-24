#include "main.h"

/**
 * print_decimal - prints integer to standard output using _putchar.
 * @args: arguments
 * Description: passes a long integer argumen to va_arg.
 *
 * Return: number of characters printed.
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	char buffer[21];
	int len = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		len++;
		num = -num;
	}

	while (num != 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		len++;
	}

	return (len);
}
