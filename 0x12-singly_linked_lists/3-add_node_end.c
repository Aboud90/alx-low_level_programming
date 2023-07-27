#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @h: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *x;
	int len;
	list_t *y, *z;

	y = malloc(sizeof(list_t));
	if (y == NULL)
		return (NULL);

	x = strdup(str);
	if (str == NULL)
	{
		free(y);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	y->str = x;
	y->len = len;
	y->next = NULL;

	if (*h == NULL)
		*h = y;

	else
	{
		z = *h;
		while (z->next != NULL)
			z = z->next;
		z->next = y;
	}

	return (*h);
}
