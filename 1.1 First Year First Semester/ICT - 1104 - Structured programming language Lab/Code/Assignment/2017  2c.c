#include<stdio.h>
int main()
{
    int x,y;
    int a=5,b=10,c=15;
    x = (a++)-(--b)+(c--)-(--a)+(b++);
    printf("%d\n",x);
    y = (x--)+(++a)-(--b)+(c++);
   printf("%d\n",y);
}

