#include "holberton.h"

/**
 * print_bin -Converts unsigned int argument to binary
 * @bin: The decimal number to be converted
 *
 * Return: the number of digits printed
 */

int print_bin(va_list bin)
{
unsigned int number, count = 0, index = 0;
int arr[100];

number = va_arg(bin, int);

if (number < 2)
{
_putchar(number + '0');
count = 1;
}
else if (number >= 2)
{
while (number > 0)
{
arr[index] = number % 2;
index++;
}
}
while (index--)
{
_putchar(arr[index] + '0');
count++;
}
return (count);
}
