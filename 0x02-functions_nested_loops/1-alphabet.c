#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line
 * 
 */
void print_alphabet(void)
{
	char ph;

	ph = 'a';
	while (ph <= 'z')
	{
		_putchar(ph);
		ph++;
	}	

	_putchar('\n');

	return (0);

}
