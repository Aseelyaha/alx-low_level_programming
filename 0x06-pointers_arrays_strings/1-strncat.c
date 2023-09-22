#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int k, r;
k = 0;
r = 0;

while (dest[k] != '\0')
{

k++;

}

while (r < n && src[r] != '\0')

{

dest[k] = src[r];

k++;

r++;

}
dest[k] = '\0';

return (dest);
}
