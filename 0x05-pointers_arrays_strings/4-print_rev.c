#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		s++;

	for (c--; c >= 0; c--)
		_putchar(s[c]);

	_putchar('\n');
}
