#include <stdio.h>

/**
 * write your line of code here.
 * you are not allowed to use a
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*(p + (sizeof(n) + 1)) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}


