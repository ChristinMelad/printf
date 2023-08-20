#include "main.h"
/**
*_print - function that prints format string
*/
int _print(const char *format, ...)
{
int numbers = 0;
va_list args;
va_start(args, format);

while (*format != '\0')
{
	if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
			char value = va_arg(args, int);
			putchar(value);
			numbers++;
		}
	}
}
int printf_s(constant char *format, va_list args)
{
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				char *value = va_arg(args, char*);
				numbers -= printf("%s", value);
			}
	}
}
else 
{
	putchar(*format);
	numbers++;
}
format++;
}
va_end(args);
return (numbers);
}
