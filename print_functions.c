#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_int - Prints an integer to standard output
 * @args: list of variable argument
 * Return: count of digit in number
 */
int print_int(va_list args)
{
long int number, divisor, count = 0;

number = va_arg(args, int);

if (number == 0)
{
_putchar('0');
count = 1;
}
else if (number < 0)
{
_putchar('-');
number = -number;
count = 1;
}
if (number > 0)
{
for (divisor = 1; divisor <= number; divisor *= 10)
;
while (divisor > 1)
{
divisor /= 10;
_putchar((number / divisor) +'0');
number %= divisor;
count++;
}
}
return (count);
}

/**
 * print_char - Prints a character to standard output
 * @args: list of variable arguments
 * Return: 1 for printed character
 */

int print_char(va_list args)
{
_putchar(va_arg(args, int));
return (1);
}
/**
 * print_str - prints a string to standard output
 * @args: list of args
 * Return: length of printed string
 */
int print_str(va_list args)
{
int length, index;
char *str;

str = va_arg(args, char*);
if (str == NULL)
str = "(null)";
if (str[0] == '\0')
return (0);
for (length = 1; str[length] != '\0'; length++)
;
for (index = 0; index < length; index++)
_putchar(str[index]);
return (length);
}

/**
 * print_per - Prints to the standard output a percent sign passed as an
 * argument to the function
 * Return: 1 for printed '%'
 */
int print_per(void)
{
_putchar('%');
return (1);
}
