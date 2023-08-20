#include <stdio.h>
int main()
{
    int data[100],i,n,step,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        printf("%d. Enter element: ",i+1);
        scanf("%d",&data[i]);
    }
    for(step=1; step<n; ++step)
        for(i=0; i<n-step; ++i)
        {
            if(data[i]>data[i+1])

            {
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;

            }
        }
    printf("In ascending order: ");

    for(i=0; i<n; ++i)
        printf("%d ",data[i]);
    return 0;
}
