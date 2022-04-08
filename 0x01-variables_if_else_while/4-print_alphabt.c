#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Prints if number is positive, zero or negative
 *  Return: Always (Success)
 */

int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
