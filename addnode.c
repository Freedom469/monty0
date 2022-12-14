#include "monty.h"
/**
 *addnode - adds a node
 *
 *@head: head of the node to add
 *
 *@n: value to be added to the node
 *
 */

void addnode(stack_t **head, int n)
{
	stack_t *new, *temp;

	if (!isdigit(n) || n == NULL)
	{
		dprintf(STDOUT_FILENO,
		"L%u: usage: push integer\n",
		line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("ERROR\n");
		exit(0);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if ((*head)->next == NULL)
	{
		*head = new;
	}
	else
		new->next = *head;
	(*head)->prev = new;
	*head = new;

}
