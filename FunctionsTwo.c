#include "main.h"

/**
 *print_integer - prints integer number
 *@args: arguments
 *Return: i
 */

int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int num, last_dig = n % 10, dig;
	int i = 1, expression = 1;

	n = n / 10;
	num = n;

	if (last_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_dig = -last_dig;
		i++;
	}
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			expression *= 10;
			num /= 10;
		}
		num = n;
		while (expression > 0)
		{
			dig = num / expression;
			_putchar(dig + '0');
			num -= dig * expression;
			expression /= 10;
			i++;
		}
	}
	_putchar(last_dig + '0');
	return (i);
}

/**
 * print_decimal - print decimal
 * @args: argument
 * Return: i
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, last_dig = n % 10, dig;
	int i = 1, expression = 1;

	n = n / 10;
	num = n;

	if (last_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_dig = -last_dig;
		i++;
	}
	if (num > 0)
	{
		while ((num / 10) != 0)
		{
			expression *= 10;
			num /= 10;
		}
		num = n;
		while (expression > 0)
		{
			dig = num / expression;
			_putchar(dig + '0');
			num -= dig * expression;
			expression /= 10;
			i++;
		}
	}
	_putchar(last_dig + '0');
	return (i);
}

/**
 * print_string - prints string
 * @args: argument
 * Return: string length
 */

int print_string(va_list args)
{
	char *str;
	int i, length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = str_len(str);

		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
	else
	{
		length = str_len(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
}

/**
 * printc - prints character
 * @args: print character
 * Return: (1)
 */

int printc(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_mod - print %
 * Return: 1
 */

int print_mod(void)
{
	_putchar('%');
	return (1);
}
