#include "main.h"
#include <stdio.h>

/**
 * get_print - gets the correct function for a format specifier
 * @s: the format specifier
 * Return: the correct function if exists, NULL otherwise
 */

int (*get_print(char s)) (va_list arg)
{
	func_print printers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
		{'b', print_b},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_hex},
		{'X', print_hex},
		{'%', NULL}
	};

	int i = 0;

	while (printers[i].format != '%')
	{
		if (s == printers[i].format)
			return (printers[i].func);
		i++;
	}

	return (NULL);
}

