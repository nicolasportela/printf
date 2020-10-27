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

if (format == NULL)
{
return (-1);
}

va_start(valist, format);
count = parse_format(format, get_opt, valist);
va_end(valist);

return (count);
}

/**
 * parse_format - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @get_opt: A list of all the posible functions.
 * @valist: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */

int parse_format(const char *format, stfor_t get_opt[], va_list valist)
{
	int i, j, count, total_characters = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; get_opt[j].dt != NULL; j++)
			{
				if (format[i + 1] == get_opt[j].dt[0])
				{
					count = get_opt[j].fp(valist);
					if (count == -1)
						return (-1);
					total_characters += count;
					break;
				}
			}
			if (format[i] == '\0')
				break;
			if (get_opt[j].dt == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					total_characters = total_characters + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			total_characters++;
		}
	}
	return (total_characters);
}
