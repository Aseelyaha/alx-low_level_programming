#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
*/

char *_strcat(char *dest, char *src)

{

int destlen = 0;
int srclen = 0;
int i;
for (i = 0; dest[i] != '\0' ; i++)
	destlen++
for (i = 0; rc[i] != '\0'; i++)
	srclen++;

for (i = 0; i <= scrlen; i++)
{
	dest[destlen + i] = src[i];
}
return (dest);
}
