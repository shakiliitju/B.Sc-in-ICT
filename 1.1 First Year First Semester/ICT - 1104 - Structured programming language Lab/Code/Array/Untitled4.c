#include<stdio.h>
int main()
{
    int i,j,ara[10] = {1,2,3,4,5,6,7,8,9,10};
    int ara2[10];

    for(i=0,j=9; i<10; i++,j--)
    {
        ara2[j] = ara[i];
    }
    for(i=0; i<10; i++)
    {
        ara[i] = ara2[i];
    }
    for(i=0; i<10; i++)
    {
        printf("arr[%d] = %d\n",i,ara[i]);
    }

    return 0;
}

