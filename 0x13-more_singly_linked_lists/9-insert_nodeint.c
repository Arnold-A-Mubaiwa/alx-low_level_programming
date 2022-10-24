#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr || !head)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
