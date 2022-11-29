#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of the list
 *
 * Return: the number of count nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor)
	{
		count++;
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
	
	return (count);
}
