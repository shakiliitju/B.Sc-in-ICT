#include<stdio.h>
int main()
{
    int n,i,k;
    printf("Enter the decimal number ");
    scanf("%d",&n);
    printf("Binary number is :");
    for(i=31; i>=0; i--)
    {
        k=n>>i;
        if(k&1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");


    return 0;
}
