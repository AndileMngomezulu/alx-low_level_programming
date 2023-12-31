#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * _strlen - returns the length of the string
  * @s: character
  * Return: value of x
  */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: head of a list_t list
  * @str: value to insert into element
  * Return: number of nodes
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
