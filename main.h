#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list args);
int print_string(va_list args);
int print_percentage(void);
int print_decimal(va_list args);
int print_integer(va_list args);
int _abs(int num);
int str_len(char *s);
int str_length(const char *s);
int print_reverse(va_list args, int numbers);


/**
*struct my_specifiers - match the conversion specifiers
*@c: type pointer of the specifier
*@func: pointer to function
*/
typedef struct my_specifiers
{
	char *c;
	int (*func)();

} specifiers;


#endif /*MAIN_H*/
