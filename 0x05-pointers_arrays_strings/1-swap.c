#include "main.h"
#include <stdio.h>


/**
 * swap_int - swaps the values of two integers.
 *  pointer to an int
 *  pointer to other int
 *  Return: Nothing
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
