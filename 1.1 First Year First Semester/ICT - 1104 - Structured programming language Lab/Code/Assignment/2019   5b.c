#include<stdio.h>
void main(void)
{
    int a[5] = {1,2,3,4,5};
    print3(a,5);
}
void print3(int *tab, int N)
{
    int *ptr;
    for(ptr = tab; ptr<tab+N; ptr++)
        printf("%d",*ptr);
}
