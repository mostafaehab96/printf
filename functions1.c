#include "main.h"

/**
 * print_unsigned - prints unsigned integer
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

	for (; i > 0; i = i / 10)
	{
		length += _putchar('0' + (n / i));
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
	for (temp = n; temp != 0; j++)
		temp = temp / 8; /* convert it into oct */
	oct = malloc(j);

	for (i = j - 1; i >= 0; i--)
	{
		oct[i] = n % 8 + '0';
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
/**
 * print_hex - prints the hex
 * @args: va_list of arguments
 * Return: Number of hexas
 */
int print_hex(va_list args)
{
    int intg = va_arg(args, int);
    char hex[100];
    int i = 0,
        printedC = 0,
        j;

    while (intg != 0) {
        int r = intg % 16;

        if (r < 10)
            hex[i] = 48 + r;
        else
            hex[i] = 55 + r;

        intg = intg / 16;
        i++;
    }
    hex[i] = '\0';

    for (j = i - 1; j >= 0; j--)
    {
            _putchar(hex[j]);
            printedC++;
    }
    return (printedC);

}
