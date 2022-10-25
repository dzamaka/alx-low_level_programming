#include "lists.h"
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (*head == NULL)
		return (NULL);

	current = *head;
	*head = current->next;
	temp = (*head)->next;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}

	while (temp != NULL)
	{
		(*head)->next = current;
		current = *head;
		*head = temp;
		temp = (*head)->next;
	}

	(*head)->next = current;
	return (*head);
}
