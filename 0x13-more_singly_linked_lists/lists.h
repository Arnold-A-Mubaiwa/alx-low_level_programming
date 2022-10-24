#ifdef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


#endif