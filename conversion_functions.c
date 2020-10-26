#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - Converts unsigned int argument to binary
 * @bin: The decimal number to be converted
 *
 * Return: The number of digits printed
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
number /= 2;
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
/**
 * print_Xhexa - Converts decimal to uppercase hexadecimal
 * @args: the list of arguments
 *
 * Return: The number of digits printed
 */

int print_Xhexa(va_list args)
{
long int number, temp, count = 0, index;
char *num;
unsigned int size = 100;

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
temp = number;
while (temp != 0)
{
temp /= 16;
}
num = convert(number, size, 16);
while (temp != 0)
{
temp /= 16;
}
num = convert(number, size, 16);
for (index = 0; num[index] != '\0'; index++)
{
_putchar(num[index]);
count++;
}
return (count);
}
/**
 * convert - converts decimal number to hexadecimal number
 * @num: number to be converted
 * @size: digits in hexadecimal number
 * @base: base to convert to
 * Return: pointer to hexadecimal
 */
char *convert(unsigned int num, unsigned int size, int base)
{
char num_sys[] = "0123456789ABCDEF";
char buffer[100];
char *ptr;

ptr = &buffer[size];
*ptr = '\0';

do {
*--ptr = num_sys[num % base];
num /= base;
} while (num != 0);

return (ptr);
}
/**
 * print_oct - Converts a decimal number passed to the argument to an octal
 * number
 * @oct: The number to be converted
 * Return: count of digit in octal number
 */
int print_oct(va_list oct)
{
unsigned int number, count = 0, index = 0;
int arr[100];

number = va_arg(oct, int);
if (number < 9)
{
_putchar(number + '0');
count = 1;
}
else if (number >= 9)
{
while (number > 0)
{
arr[index] = number % 8;
number /= 8;
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
/**
 * print_u - Convert a number into an unsigned int and print it
 * @un: The number to be converted
 *
 * Return: The number of digits printed
 */
int print_u(va_list un)
{
unsigned int number, count = 0, divisor;

number = va_arg(un, int);

if (number == 0)
{
_putchar('0');
count = 1;
}
if (number > 0)
{
for (divisor = 1; (number / divisor) > 9; divisor *= 10)
;
while (divisor != 0)
{
_putchar((number / divisor) + '0');
number %= divisor;
divisor /= 10;
count++;
}
}
return (count);
}
