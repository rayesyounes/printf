#include "main.h"

/* BY Rayes Younes & Zakaria Oumellouk */
/**
 * call_flag - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int call_flag(char s, flags_t *f)
{
	int x = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			x = 1;
			break;
		case ' ':
			f->space = 1;
			x = 1;
			break;
		case '#':
			f->hash = 1;
			x = 1;
			break;
	}

	return (x);
}
