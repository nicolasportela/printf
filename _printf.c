#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - prints output according to format
 * @format: string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	va_list args;
	int count = 0, fi, speci;
	spec_t spec[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
=======
va_list args;
int count = 0, fi, speci;
spec_t spec[] = {
{"c", print_char}, {"s", print_str},
{"%", print_per}, {"d", print_int},
{"i", print_int}, {"b", print_bin},
{"o", print_oct}, {"X", print_Xhexa},
{"u", print_u}, {NULL, NULL}
};
>>>>>>> 304113f4543582b230bf8f667b8ce821002b5462

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
for (fi = 0; format[fi] != '\0'; fi++)
{
while (format[fi] != '%' && format[fi] != '\0')
{
_putchar(format[fi]);
count++;
fi++;
}
if (format[fi] != '\0')
fi++;
else
break;
for (speci = 0; speci < 9; speci++)
{
if (format[fi] == *(spec[speci].spec))
{
count += spec[speci].f(args);
break;
}
}
}
va_end(args);
return (count);
}
