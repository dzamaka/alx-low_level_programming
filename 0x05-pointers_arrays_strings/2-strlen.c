#include "main.h"
/**
 * _strlen - returns the lenghth of a string
 * @s: char to return
 * Return: 0
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; c++)

		s++;

	return (c);
}

