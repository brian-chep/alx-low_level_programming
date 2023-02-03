#include "lists.h"

/**
 * sum_listint - returns sum of all the data in a linked list
 * @head: pointer to the head of the linked list
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
