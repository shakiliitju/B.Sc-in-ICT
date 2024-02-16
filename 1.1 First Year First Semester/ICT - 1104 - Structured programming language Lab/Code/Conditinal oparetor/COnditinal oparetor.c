#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number ");
    scanf("%d %d",&a,&b);

    c = (a>b) ? a : b;
    printf("Large number %d\n",c);

    return 0;
}
