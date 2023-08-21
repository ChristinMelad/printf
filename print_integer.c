#include "main.h"

/**
*print_integer - prints integer number
*@args: arguments
*@numbers: chracaters
*Return: numbers
*/

int print_integer(va_list args, int numbers)
{
	int num = va_arg(args, int);
	int count = 0;
	int temp = num;

if (num < 0)
{
	numbers += _putchar('-');
	num = -num;
	temp = num;
}
do {
	count++;
	temp /= 10;
} while (temp != 0);

while (count > 0)
{
	int pow10 = 1;
	int i;

for (i = 1; i < count; i++)
{
	pow10 *= 10;
}
count = num / pow10;
numbers += _putchar(count + '0');
num -= count  *pow10;
count--;
}
return (numbers);
}
