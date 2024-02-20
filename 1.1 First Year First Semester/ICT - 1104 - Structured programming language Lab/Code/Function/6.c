
///function Declare


#include <stdio.h>

int add(int a, int b);

int main()
{
    int x=12, y=67, z;
    z = add(x,y);
    printf("%d",z);
}

int add(int a, int b)
{
    int sum;
    sum = a+b;
    return(sum);
}
