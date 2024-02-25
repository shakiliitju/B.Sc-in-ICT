#include <stdio.h>

int change (int x)
{
    x = 20;
    return x;
}

int main()
{


    int x = 100;
    x= change (x);
    printf("%d  %d \n",x,x);
    return 0;


}

