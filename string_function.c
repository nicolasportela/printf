#include "holberton.h"
/**
 * print_string - specificer s
 * @valist: valist
 * Return: total characters
 */
int print_string(va_list valist)
{
int i;
char *s;

s = va_arg(valist, char*);

if (s == NULL)
{
s = "(null)";
}

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}

return (i);
}
