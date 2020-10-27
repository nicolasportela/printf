#include "holberton.h"

/**
 * print_int - function that returns an int to a signed decimal
 * @valist: arguments passed
 * Return: length of integers
 */
int print_int(va_list valist)
{
int i, div, len;
unsigned int num;

i = va_arg(valist, int);
div = 1;
len = 0;
if (i < 0)
{
len += _putchar('-');
num = i * -1;
}
else
{
num = i;
}

for (; num / div > 9;)
{
div *= 10;
}

for (; div != 0;)
{
len += _putchar('0' + (num / div));
num %= div;
div /= 10;
}

return (len);
}

/**
 * print_per - Prints a percent symbol
 * @valist: list of arguments
 * Return: Will return the amount of characters printed.
 */
int print_per(__attribute__((unused))va_list valist)
{
_putchar('%');
return (1);
}

/**
 * print_char - specificer c
 * @valist: valist
 * Return: void
 */
int print_char(va_list valist)
{
_putchar(va_arg(valist, int));
return (1);
}
