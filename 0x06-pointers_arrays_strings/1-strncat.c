#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * eturn: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, co;
{
}
for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\0')
co = n;
}
return (dest);
}

