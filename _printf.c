#include "main.h"
/**
 *_printf - function that prints the characters
 *@format: string
 *Return: format
 */

int _printf(const char *format, ...)
{
	int numbers = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			numbers = selector(format, args, numbers);
			format++;
		}
		else
		{
			_putchar(*format);
			numbers++;
			format++;
		}
	}
	va_end(args);
	return (numbers);
}
