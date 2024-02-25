#include <stdio.h>
int main()
{
    int i,n,max;
    printf("Enter the array size ");
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the value ");
        scanf("%d",&x[i]);
    }
    max = x[0];
    for (i=1;i<n;i++)
    {
        if (max < x[i])
            max = x[i];
    }
    printf("Maximum value is %d",max);
    return 0;
}

