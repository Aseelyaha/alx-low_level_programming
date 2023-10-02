#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */

char *_strchr(char *s, char c)
{
int k;

for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
