#include <unistd.h>
/**
 * _putchar - writes the char to stdout
 * @c: character
 * Return: on success 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - prints string
 * @str: the string
 * Return: void
*/
void _puts(char *str)
{
while (*str)
{
_putchar(str);
str++;
}
_putchar('\n');
}

/**
 * len - returns the length of string
 * Return: string length
*/
int len(char *s)
{
int i = 0;
if (s != NULL)
{
    while (s[i] != '\0')
    {
        i++;
    }
}
return (i);
}
