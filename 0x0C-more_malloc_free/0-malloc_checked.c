#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * File: 0-malloc_checked.c
 *  Auth: Brennan D Baraban
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}

