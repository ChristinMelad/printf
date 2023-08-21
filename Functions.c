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
*Return: 1
*/
int printc(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}


/**
*print_string - prints string
*@args: arguments
*Return: 6
*/

int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
else
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}
}


/**
*cmp_func - Funcation compares between 2 parameters
*@f: variable to hold the value passed to cmp function
*Return: 0.
*/

int(*cmp_func(const char f))(va_list)

{
specifiers printf[] = {
{'c', printc},
{'s', print_string},
{'\0', NULL},
};


int i;

for (i = 0; printf[i].identifier != '\0'; i++)
{
	if (printf[i].identifier == f)
	{
		return (printf[i].func);
	}
}
return (0);
}
