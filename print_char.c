#include "main.h"

int print_char(va_list args)
{
    _putchar(va_arg(args, int));
    return (1);
}

