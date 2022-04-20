#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int myrand;
int count;
int total;
srand(time(NULL));
srand(time(NULL));
{
myrand = (rand() % 125) + 1;
printf("%c", myrand);
total -= myrand;
}
printf("%c", total);
return (0);
}

