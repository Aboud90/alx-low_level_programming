#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the list.
 * Return: head node’s data (n).
 **/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *1_node = *head;

	if (!1_node)
		return (0);

	data = (*head)->n;
	*head = 1_node->next;
	free(1_node);
	return (data);
}
