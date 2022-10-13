#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s", seperator);
	}

	printf("\n");
	va_end(valist);
}
