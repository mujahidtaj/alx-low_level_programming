#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


/**
 * coinConverter - Helper function that does all the mathematics
 * i: Passed in variable from main for calculations
 * Return: The number of coins needed minimum for the passed in variable
 */
int num_checker(char *a)
{
int i, num, len;
i = 0;
num = 0;
len = strlen(a);
while (i < len)
{
if (a[i] < '0' || a[i] > '9')
{
return (-1);
}
else
num = num * 10 + (a[i] - '0');
i++;
}
return (num);
}

/**
 * @argc: Number of command line arguments
 *  @argv: Array name
 *  Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, num, sum;
sum = 0;
for (i = 1; i < argc; i++)
{
num = num_checker(argv[i]);
if (num == -1)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}


