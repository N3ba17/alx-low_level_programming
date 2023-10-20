#include"lists.h"

/**
 * list_len - return the number of element
 * @h: first parameter
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}

