#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to concatenate to
 * @src: string
 * @n: amount of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)

	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}


