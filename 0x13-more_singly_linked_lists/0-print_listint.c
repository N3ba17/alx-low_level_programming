#include"lists.h"

/**
 * print_listint - print all elements of linked list
 * @h: the linked list pointer
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
