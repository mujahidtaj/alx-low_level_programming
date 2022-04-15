#include "main.h"

/**
 * print_number - prints an integer
 * @n: tracked var
 */
void print_numbers(int n)
{
unsigned int x = n;
if (n < 0)
{
_putchar(45);
x = -x;
}
if ((x / 10) > 0)
{
print_numbers(x / 10);
}
_putchar((x % 10) + 48);

}
