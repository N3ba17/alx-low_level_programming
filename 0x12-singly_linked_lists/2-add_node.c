#include"lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *list, *tail; 
	size_t i = 0;

	list = malloc(sizeof(list_t));
	if (list == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
		list->len = i;
		list->str = strdup(str);
		list->next = *head;
		if (*head == NULL)
		{
			list ->next = *head;
			*head = list;
		}
		else
		{
			list->next = NULL;
			tail = *head;
			while (tail->next)
				tail = tail->list;
			tail->next = list;
		}
	}
		return (list);
}
