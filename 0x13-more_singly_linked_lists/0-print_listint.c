#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	//ptr is a pointer we will use to run traverse, print, and count the linked list
	const listint_t *ptr;
	ptr = malloc(sizeof(listint_t));
	ptr = h;

	//count is used to store the number of nodes in the linked list
	size_t count = 0;

	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	free(ptr);
return(count);
}