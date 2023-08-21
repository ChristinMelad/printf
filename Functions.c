#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/**
*_putchar - writes the char to stdout
*@c: character
*Return: on success 1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
*printc - prints character
*@args: list
*@numbers: printed characters
*Return: characters
*/
int printc(va_list args, int numbers)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (numbers + 1);
}


/**
*print_string - prints string
*@args: arguments
*@numbers: printed charcaters
*Return: characters
*/

int print_string(va_list args, int numbers)
{
	char *str = va_arg(args, char *);

while (*str != '\0')
{
	_putchar(*str);
	numbers++;
	str++;
}
return (numbers);
}
