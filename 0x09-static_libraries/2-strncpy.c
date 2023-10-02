#include "main.h"

/**
  * _strncpy - The main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int k = 0;

while (k < n && src[k] != '\0')
{

dest[k] = src[k];
k++;

}

while  (k < n)
{
dest[k] = '\0';
k++;
}

return (dest);
}
