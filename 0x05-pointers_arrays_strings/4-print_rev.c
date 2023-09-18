#include "main.h"

/**
 * print rev - print reversed string, followed by anew line
 * @s: pointer tothe string to print
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
