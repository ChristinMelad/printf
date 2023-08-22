#include "main.h"

/**
*print_reverse - prints the string reversed
*@args: arguments
*@numbers: characters
*Return: numbers
*/

int print_reverse(va_list args, int numbers)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		numbers++;
	}
	return (numbers);
}
