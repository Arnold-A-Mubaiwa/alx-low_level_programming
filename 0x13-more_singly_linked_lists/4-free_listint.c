#include "lists.h"

/**
 *free_listint - frees up a node
 *@head: node to be freed
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
