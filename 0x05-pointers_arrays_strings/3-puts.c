#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int c;

	for (c = 0; *str != '\0'; `c++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
