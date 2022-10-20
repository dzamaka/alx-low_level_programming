#include "lists.h"

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *new;
	size_t c;

	c = 0;
	new = h;
	while (new != NULL)
	{
		printf("[%d] %s\n", new->len, new->str);
		new = new->next;
		c++;
	}

	return (c);
}
