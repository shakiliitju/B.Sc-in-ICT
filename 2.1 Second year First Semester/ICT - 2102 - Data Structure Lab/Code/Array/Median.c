
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n;
    float m;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        m=(a[n-1/2]+(a[n/2]))/2;
    }
    else
    {
        m=a[n/2];
    }
    printf("\nMedian is %f\n",m);
    return 0;

}
