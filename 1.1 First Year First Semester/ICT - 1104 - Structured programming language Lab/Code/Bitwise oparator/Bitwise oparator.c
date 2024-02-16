#include<stdio.h>
int main()
{
    int a=32;
    int b=12;
    int c;

    c = a&b;
    printf("a&b = %d\n",c);
     c = a|b;
     printf("a|b = %d\n",c);
     c = a^b;
     printf("a^b = %d\n",c);

    return 0;
}
