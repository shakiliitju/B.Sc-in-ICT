#include <stdio.h>
void fibo(int n)
{
    int i,a,b,c;
    a = 1;
    b = 1;
    for (i=2; i<n; i++)
    {
        c = a+b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}
int main()
{
 int n;
 printf("Enter the range ");
 scanf("%d",&n);
 printf("0 1 1 ");
 fibo (n);

    return 0;
}
