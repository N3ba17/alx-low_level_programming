#ifndef list_h
#define list_h

#include<stdio.h>
#include<stdlib.h>

/**
 * struct list_s - linked list
 * @str: string
 * @len: length
 * @next: pointer next node
 *
 * Description: linked list node struct
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
