#include "main.h"

int selector(const char *format, va_list args, int numbers)
{
    switch (*format)
    {
    case 's':
        numbers = print_string(args, numbers);
        break;
    
    case 'c':
        _putchar(va_arg(args, int));
        numbers++;
        break;
    }
}
