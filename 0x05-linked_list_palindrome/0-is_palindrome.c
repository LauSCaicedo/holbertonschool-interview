#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_reverse - Function that reverse a simply linked list.
 * @head: Head of the list.
 * Return: A node.
 */

listint_t *is_reverse(listint_t *head)
{
	listint_t *current = head;
	listint_t *before = NULL, *after = NULL;

	while (current != NULL)
	{
		after = current->next;
		current->next = before;
		before = current;
		current = after;
	}
	return (before);
}

/**
 * is_palindrome - Function that checks if a singly linked list is a palindrome.
 * @head: Head of the list.
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome.
 */

int is_palindrome(listint_t **head)
{
	listint_t *fast = *head;
	listint_t *slow = *head;
	listint_t *x;
	listint_t *current = *head;

	if (*head == NULL)
	{
		return (1);
	}
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	x = is_reverse(slow);
	while (x != NULL && current != NULL)
	{
		if (x->n != current->n)
		{
			return (0);
		}
		x = x->next;
		current = current->next;
	}
	return (1);
}
