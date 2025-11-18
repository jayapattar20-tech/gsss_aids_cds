#include<stdio.h>

int main() {
    char c;
    int i;
    double d;
    char* pc;
    int* pi;
    double *pd;
    printf("%d  %d  %d \n", sizeof(c), sizeof(i), sizeof(d));
    printf("%d  %d  %d \n", sizeof(pc), sizeof(pi), sizeof(pd));
    
}