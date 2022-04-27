#include "main.h"
#include <stdio.h>

/**
 * strspn - search a string for a set of bytes\
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, n, value, check;
value = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (accept[n] == s[i])
{
value++;
check = 1;
}
}
if (check == 0)
return (value);
}
return (value);
}
