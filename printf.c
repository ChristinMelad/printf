#include "main.h"

/**
*_print - function that prints format string
*@format: string
*Return: numbers of characters
*/

int _print(const char *format, ...)
{
int numbers = 0;
va_list args;
unsigned int i = 0;
if (!format)
return (-1);
va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{
	return (-1);
}
else if (format[i + 1] == '%')
{
	_putchar('%');
	numbers++;
	i++;
}
else if (cmp_func(format[i + 1]) != NULL)
{
	numbers += (cmp_func(format[i + 1]))(args);
	i++;
}
else
{
	_putchar(format[i]);
	numbers++;
}
}
else
{
	_putchar(format[i]);
	numbers++;
}
}
va_end(args);
return (0);
}
