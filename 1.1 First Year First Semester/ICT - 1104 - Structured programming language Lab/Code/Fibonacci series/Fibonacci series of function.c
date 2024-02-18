#include <stdio.h>
int fib(int n)
{
    if (n<=1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
}
int main()
{
    int n,i;
    printf("Enter the range ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
        printf("%d ",fib(i));

    return 0;
}
