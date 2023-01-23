#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int i;
	i = printf("Unknown %r");
	printf("\n");
	printf("%i\n", i);
	i = _printf("Unknown %r");
	_printf("\n");
	_printf("%i\n", i);

	return (0);
}
