#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * list_len - check the code
  * @h: name of the list
  * Return: number of nodes
  */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
