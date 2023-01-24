#include "main.h"

/**
 * print_unsgined - prints unsigned integer
 * @args: va_list of arguments
 * Return: Nothing
 */

int print_unsigned(va_list args)
{
	unsigned int n;
	int length = 0,
	    i = 1;

	n = va_arg(args, unsigned int);

	for (; n / i > 9;)
		i = i * 10;

	for (; i > 0; d = d / 10)
	{
		length += _putchar('0' + (n /d));
		n = n % i;
	}
	return (length);
}
