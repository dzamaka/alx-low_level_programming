#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory to an array using malloc
 * @nmemb: array to allocate to
 * @size: bytes of nmemb to allocate
 * Return: NULL on failure
 * on success, pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');

	p = malloc(nmemb * size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return ((void *)p);
}
