
//Function Call

#include <stdio.h>

int function(int x)
{
    int a;
    a = x*x+2*x+5;
    return a;
}
int main()
{
    int x;
    scanf("%d",&x);
    printf("%d",function(x));

    return 0;
}
