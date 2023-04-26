#include "main.h"

/**
 * print_case - func to return a pointer to the appropriate print func
 * @format: format of the argument to be printed
 * Return: pointer to the appropriate print func, OR NULL if no match is found
 */
int (*print_case(const char *format))(va_list)
{
	int i = 0;

	spec_handler fmt_types[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}};

	for (; fmt_types[i].specifier; i++)
	{
		if (*format == *(fmt_types[i].specifier))
		{
			return (fmt_types[i].conversion_func);
		}
	}
	return (NULL);
}
