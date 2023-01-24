#include "main.h"

/**
 * print_unsgined - prints unsigned integer
 * @args: va_list of arguments
 * Return: Number of counted printed
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

/**
 * print_oct - prints integer in its octal base
 * @args: va_list of arguments
 * Return: Number of octals
 */

int print_oct(va_list args)
{
	unsigned int n = va_arg(args, unsigned int),
		     temp;
	char *oct;
	int i, j,
	    printedC = 0;
	if (n == 0)
		return (_putchar('0'));
	if (temp = n; temp != 0; j++)
		temp = temp / 8; /* convert it into oct */
	oct = malloc(sizeof(int) * j);

	for (i = j - 1; i >= 0; i--)
	{
		oct[i] = num % 8 + '0';
		n = n / 8;
	}

	for (i = 0; i < j && oct[i] == '0'; i++)
		continue;
	for (; i < j; i++)
	{
		_putchar(oct[i]);
		printedC++;
	}
	free(oct);
	return (printedC);
}
