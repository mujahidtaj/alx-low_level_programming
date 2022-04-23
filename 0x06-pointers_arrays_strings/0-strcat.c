#include "main.h"
#include <stdio.h>

/**
 *  _strcat - a function that concatenates two strings
 *  @dest: copy to
 *  @src: copy from
 *  Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
int dlen = 0, i;
{
dlen++;
}
for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}
dest[dlen] = '\0';
return (dest);
}
