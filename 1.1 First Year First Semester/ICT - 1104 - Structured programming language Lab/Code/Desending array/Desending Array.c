#include <stdio.h>
int main()
{

    int i,j,k,n,Temp;
    printf("Enter the array size ");
    scanf("%d",&n);
    int x[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the value ");
        scanf("%d",&x[i]);

    }
    for(j=0;j<=n-2;j++)
        for (k=j+1;k<=n-1;k++)
    {
        if (x[j] < x[k])
        {
            Temp = x[j];
            x[j] = x[k];
            x[k] = Temp;
        }
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}
