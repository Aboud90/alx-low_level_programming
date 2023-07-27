#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @h: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **h, const char *str)
{
	char *x;
	int len;
	list_t *y;

	new = malloc(sizeof(list_t));
	if (y == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
	{
		free(y);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	y->str = x;
	y->len = len;
	y->next = *h;

	*h = y;

	return (y);
}
