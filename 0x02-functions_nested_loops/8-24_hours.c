#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -prints every minute of the day
*@n: The int to print
* Return: Always 0.
*/

void jack_bauer(void)
{
int a;
int b;
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)

{
_putchar (a / 10 + '0');
_putchar (a / 10 + '0');
_putchar (':');
_putchar (b / 10 + '0');
_putchar (b % 10 + '0');
_putchar ('\n');
}
}
}

