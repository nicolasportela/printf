#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * struct specifier - Struct for data types and function pointers
 * @spec: The data type to be specified by _printf
 * @f: The corresponding function pointer for each data type
 *
 * Description: Data types specified by _printf have corresponding functions
 */
typedef struct specifier
{
char *spec;
int (*f)();
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(void);
int print_bin(va_list bin);
int print_Xhexa(va_list args);
char *convert(unsigned int num, unsigned int size, int base);
int print_oct(va_list oct);
int print_u(va_list un);
#endif
