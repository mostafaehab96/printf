#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>

int _putchar(char c);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_number(int n);
int (*get_print(char c)) (va_list arg);
int _printf(const char *format, ...);
int print_unsigned(va_list args);
int print_oct(va_list args);
/**
 * struct print - New typedef struct
 * @format: data type
 * @func: a pointer to a function
 */
typedef struct print
{
	char format;
	int (*func)(va_list arg);
} func_print;
#endif
