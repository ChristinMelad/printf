#include "main.h"

/**
*_printf - function that prints the characters
*@format: our main string
*Return: numbers of the characters
*/

int _printf(const char *format, ...)
{
	specifiers arr[] = {
		{"%c", printc},
		{"%s", print_string},
		{"%%", print_percentage},
		{"%d", print_decimal},
		{"%i", print_integer},
	};

va_list args;
int i = 0, j, numbers = 0;

va_start(args, format);

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

First_loop:

while (format[i] != '\0')
{
	j = 4;
	while (j >= 0)
	{
		if (arr[j].c[0] == format[i] && arr[j].c[1] == format[i + 1])
		{
			numbers += arr[j].func(args);
			i += 2;
			goto First_loop;
		}
		j--;
	}
	_putchar(format[i]);
	numbers++;
	i++;
	}
	va_end(args);
	return (numbers);
}
