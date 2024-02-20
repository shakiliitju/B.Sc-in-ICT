
//Function Call

#include<stdio.h>

int add (int x,int y)
{
    int s;
    s = x+y;
    return (s);
}

int mul(int x, int y)
{
    int m;
    m = x*y;
    return m;
}
int main()
{
    int a,x,y;
    scanf("%d %d",&x,&y);
    a = mul(2,mul(x,y));
    printf("%d\n",a);


}

