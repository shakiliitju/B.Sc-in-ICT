#include<stdio.h>
int main()
{
    int n,row,col;

    scanf("%d",&n);

    for (row=n; row>=1; row--)
    {

        for (col=1; col<=row; col++)
    {
        printf("%c ",row+64);
    }
    printf("\n");
    }
    return 0;
}

