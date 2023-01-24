#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>

<<<<<<< HEAD
=======
int _putchar(char c);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_number(int n);
int (*get_print(char c)) (va_list arg);
int _printf(const char *format, ...);
int print_unsigned(va_list args);
int print_oct(va_list args);
int print_hex(va_list args);
int uusigned_to_binary(va_list args);
>>>>>>> 34305d49e2517021e055442e19c79e6a9ead38ca
/**
 * struct print - New typedef struct
 * @format: data type
 * @func: a pointer to a function
 */
typedef struct print
{
	char format;
	int (*func)(va_list *arg);
} func_print;
int *print(va_list *args, const char *s, int percent_before);
int check_format(char c);
#endif
