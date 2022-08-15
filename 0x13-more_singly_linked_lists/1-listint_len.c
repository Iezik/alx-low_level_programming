#include <stdio.h>
#include "lists.h"
/**
 *listint_len - return length of element
 *
 *@h: argument pass for function
 *
 *Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return(count);
}

