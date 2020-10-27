#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct format - Struct for data types and functions pointers
 * @dt: The data type to be specified by _printf
 * @fp: The correspondig function pointer for each data type
 *
 * Description: Data types specified by _printf have corresponding functions
 */
typedef struct format
{
char *dt;
int (*fp)();
} stfor_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_bin(va_list bin);
int print_Xhexa(va_list args);
int parse_format(const char *format, stfor_t get_opt[], va_list valist);
int print_string(va_list valist);
int print_char(va_list valist);
int print_int(va_list valist);
int print_per(__attribute__((unused))va_list valist);
#endif
