#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_list - releases the memory allocated for a list
  * @head: pointer to the first node
  */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
