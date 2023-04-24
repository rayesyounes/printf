#include "main.h"


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
