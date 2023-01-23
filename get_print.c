#include "main.h"
#include <stdio.h>

int (*get_print(char s)) (va_list arg)
{
	func_print printers[] = {
		{'d', print_int},
		{'i', print_int},
		{'c', print_char},
		{'s', print_string},
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

