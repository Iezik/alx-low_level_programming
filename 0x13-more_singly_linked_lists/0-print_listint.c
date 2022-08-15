#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	//ptr is a pointer we will use to run traverse, print, and count the linked list
	size_t *ptr;
	ptr = malloc(sizeof(size_t));
	ptr = h;
	
	//count is used to store the number of nodes in the linked list
	int count = 0;

	while (ptr->next != '\0')
	{
		//str is the variable containing a string
		if (ptr->str == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s", ptr->str);
		}
		count++;
		ptr = ptr->next;
	}
return(count);
}