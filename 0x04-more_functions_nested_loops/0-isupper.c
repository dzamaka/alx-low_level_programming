#include "main.h"
/**
 * _isupper - code checks if the letters are uppercase
 * @c: input to be checked
 * Return: 1 if c is uppercase
 * otherwise return  0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

