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
	int i, n;
	int *p;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;

	p = malloc(sizeof(int) * n);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = min + 1;

	return (p);
}
