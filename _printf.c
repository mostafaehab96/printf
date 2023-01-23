#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int r = 0;
	int (*print) (va_list);
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			print = get_print(format[++i]);
			if (print == NULL)
				_putchar(format[i]);
			else
				r += print(args) - 1;
		}
		else
			_putchar(format[i]);

		i++;
		r++;
	}

	va_end(args);

	return (r);
}
