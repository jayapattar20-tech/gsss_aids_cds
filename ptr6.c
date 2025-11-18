#include <stdio.h>

int main(int argCount, char **args)
{

    long int num = 50;
    long long int *p = num; 
    printf("%u  %u  %u  %u \n", p - 1, p, p + 1, p + 2);
}