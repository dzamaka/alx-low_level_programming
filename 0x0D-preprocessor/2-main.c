#include <stdio.h>

/**
 * main - prints the name of the file it is compiled from
 * followed by a new line
 * @argc: arguement count
 * @argv: arguement
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}

