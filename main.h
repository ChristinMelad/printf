#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int _putchar(char c);
int print_string(va_list args);
int printc(va_list args);
int selector(const char *format, va_list args, int printed);
int _printf(const char *format, ...);


#endif
