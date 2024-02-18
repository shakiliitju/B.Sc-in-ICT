#include <stdio.h>
int main()
{
   int i,n,x[100];
    printf("Enter the range ");
    scanf("%d",&n);

    x[0] = 0;
    x[1] = 1;
    for (i=2; i<n; i++)
    {
        x[i] = x[i-1] + x[i-2];
    }

    for (i=0; i<n; i++)
    {
        printf("%d ",x[i]);
    }

    return 0;
}
