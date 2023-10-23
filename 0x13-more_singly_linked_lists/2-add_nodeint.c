#include "lists.h"
#include <stdio.h>

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: pointer to the address of the head
  * @n: interger for the new node
  * Return: NULL if failure, the address of the new element otherwise
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
