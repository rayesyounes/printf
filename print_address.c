#include "main.h"

/* BY Rayes Younes & Zakaria Oumellouk */
/**
 * print_address - prints address of input in hexa format
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_address(va_list l, flags_t *f)
{
	char *str;
	unsigned long int lu = va_arg(l, unsigned long int);

	register int counter = 0;

	(void)f;

	if (!lu)
		return (_puts("(nil)"));
	str = convert(lu, 16, 1);
	counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}
