#include "main.h"

/**
*selector - selects the specifiers
*@args: va_list variable
*@numbers: count the characters
*@format: string
*Return: counted characters
*/

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

	case '%':
		_putchar('%');
		numbers++;
		break;
	case 'd':
	case 'i':
		numbers = print_integer(args, numbers);
		break;
	default:
		break;
	}
	return (numbers);
}
