#include "main.h"

/* BY Rayes Younes & Zakaria Oumellouk */
/**
 * print_bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_bigS(va_list l, flags_t *f)
{
	int i, counter = 0;
	char *ref;
	char *p = va_arg(l, char *);

	(void)f;
	if (!p)
		return (_puts("(null)"));

	for (i = 0; p[i]; i++)
	{
		if (p[i] > 0 && (p[i] < 32 || p[i] >= 127))
		{
			_puts("\\x");
			counter += 2;
			ref = convert(p[i], 16, 0);
			if (!ref[1])
				counter += _putchar('0');
			counter += _puts(ref);
		}
		else
			counter += _putchar(p[i]);
	}
	return (counter);
}

/**
 * print_rev - prints a string in reverse
 * @l: argument from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *p = va_arg(l, char *);

	(void)f;
	if (!p)
		p = "(null)";

	while (p[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(p[j]);

	return (i);
}

/**
 * print_rot13 - prints a string using rot13
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = va_arg(l, char *);

	(void)f;
	for (j = 0; p[j]; j++)
	{
		if (p[j] < 'A' || (p[j] > 'Z' && p[j] < 'a') || p[j] > 'z')
			_putchar(p[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (p[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * print_percent - prints a percent
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
