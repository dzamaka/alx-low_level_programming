#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to include of s2
 * Return: NULL on failure,
 * on success pointer to the new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, m, p, k = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (p = 0; p < i; p++)
		s[k++] = s1[p];
	for (m = 0; m < j; m++)
		s[k++] = s2[m];

	s[k] = '\0';
	return (s);
}
