#include "lists.h"

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new;
	size_t count;

	for (new = h, count = 0; new != NULL; count++, new = new->next)
		printf("%d\n", new->next)

	return (count);
}
