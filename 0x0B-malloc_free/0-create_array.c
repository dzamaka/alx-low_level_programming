#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with
 * a specific char.
 * @c : char to create
 * @size: size of array char to be created
 * Return: NULL if size is 0 or if it fails,
 * on success return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

		if (size == 0)
		{
			return ('\0');
		}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return ('\0');
	}

	for (i = 0, i < size; i++;)
	{
		arr[i] = c;
	}
	return (arr);
}

