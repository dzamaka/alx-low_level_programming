#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum array
 * @max: maximum array
 * Return: NULL on failure or min > max
 * on success, pointer to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max; i++, min++)
		p[i] = min;

	return (p);
}
