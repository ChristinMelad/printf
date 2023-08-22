#include "main.h"

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
 *_abs - absolute the integer
 *@num: number
 *Return: 0
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (0);
	}
}

/**
 *str_len - return length of string
 *@str: string
 *Return: length
 */

int str_len(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		;
	}
	return (j);
}

/**
 *str_len_cons - string length function for constant string
 *@str: constant string
 *Return: length of string
 */

int str_length(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
