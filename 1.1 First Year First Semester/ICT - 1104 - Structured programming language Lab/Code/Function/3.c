
//Function Call


#include <stdio.h>

int mul(int x, int y)
{
    int p;
    p = x*y;
    return (p);
}

int main()
{
   int y;
   y = mul(10,5);
   printf("%d\n",y);
}
