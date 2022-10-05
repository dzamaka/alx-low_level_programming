#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments
 * @ac: arguments count
 * @av: pointer to array of size ac
 * Return: NULL on failure
 * on success return pointer to a new string
 */
char *argstostr(int ac, char **av)
{

	int i, n, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[k] = av[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
