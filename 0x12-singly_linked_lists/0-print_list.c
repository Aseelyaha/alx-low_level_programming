#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - function that prints all the elements of a list_t.
 * @h: pointer to the list.
 *
 * if str is NULL print [0] (nil).
 * You are allowed to use printf.
 *
 * Return: the number of nodes.
 * @return size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* while we have a pointer to list */
	while (h != NULL)
	{
		/* dereference pointer and check if str is null */
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else /* if not NULL */
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
