#include "main.h"
#include <stdio.h>



int main()
{
	int i;
	i = _printf("This is a number %i\n", 100);
	printf("%i\n", i);
	i = printf("This is a number %i\n", 100);
	printf("%i\n", i);
	return (0);
}
