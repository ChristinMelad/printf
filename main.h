#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
*struct print - structure for printf.
*@func:function pointer to print functions.
*@identifier:match the input char.
*/
typedef struct print
{
	char identifier;
	int (*func)(va_list);

} specifiers;

int _putchar(char c);
int print_string(va_list args);
int printc(va_list args);
int (*cmp_func(const char f))(va_list);
int _printf(const char *format, ...);

#endif /*MAIN_H*/
