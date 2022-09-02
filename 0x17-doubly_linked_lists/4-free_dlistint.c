#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of node
 * Return: free'd list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t_node = NULL;

	while (head != NULL)
	{
		t_node = head->next;
		free(head);
		head = t_node;
	}
}
