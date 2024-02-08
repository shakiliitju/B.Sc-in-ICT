#include <stdio.h>
int main ()
{
    int i,n,max,min;
    printf("Enter the array size ");
    scanf("%d",&n);
    int x[n];
    for (i=0; i<n; i++)
    {
        printf("Enter the value ");
        scanf("%d",&x[i]);
    }

    max = x[0];
    for (i=0; i<n; i++)

    {
        if (max < x[i])
            max = x[i];
    }
    printf("Maximum value is %d\n\n",max);


     min = x[0];
    for (i=0; i<n; i++)

    {
        if (min > x[i])
            min = x[i];
    }
    printf("Minimum value is %d",min);
    return 0;
}
