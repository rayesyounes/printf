#include "main.h"

/* BY Rayes Younes & Zakaria Oumellouk */
/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *ref;
	static char buffer[50];
	char *ptr;

	ref = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = ref[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
