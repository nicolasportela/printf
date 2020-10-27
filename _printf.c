#include "holberton.h"

/**
 * _printf - prints output according to format
 * @format: string
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
va_list valist;
int count;
stfor_t get_opt[] = {
{"c", print_char}, {"s", print_string},
{"i", print_int}, {"d", print_int},
{"%", print_per}, {"b", print_bin},
{NULL, NULL}
};

if (!format)
{
return (-1);
}

va_start(valist, format);
count = parse_format(format, get_opt, valist);
va_end(valist);

return (count);
}
