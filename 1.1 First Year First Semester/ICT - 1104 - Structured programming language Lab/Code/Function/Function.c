
//Building a Function

#include <stdio.h>

int power(int base, int i)
{
    int n;

    for(n=1; i>0; i--)

        n = n*base;
        return n;
}
int main()
{
    int i;
    for (i=0; i<=10; ++i)
        printf("2^%d = %d\n",i,power(2,i));


}
