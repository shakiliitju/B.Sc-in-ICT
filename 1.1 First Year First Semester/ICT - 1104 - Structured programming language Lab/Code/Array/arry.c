#include<stdio.h>
int main()
{
    int i,j,k,n,Temp;
    printf("Enter the array ");
    scanf("%d",&n);
    int x[n];
    for(k=0; k<n; k++)
    {
        scanf("%d",&x[k]);
    }
    for (i=0; i<=n-2; i++)
        for (j=i+1; j<=n-1; j++)
        {
            if (x[i]>x[j])
            {
                Temp = x[i];
                x[i] = x[j];
                x[j] = Temp;
            }

        }
        for(k=0;k<n;k++){
            printf("%d ",x[k]);
        }
    return 0;
}
