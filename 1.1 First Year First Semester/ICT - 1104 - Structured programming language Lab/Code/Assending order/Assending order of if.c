#include <stdio.h>
int main()
{

    long long a,b,c,d,e,i,tem;
    printf("Enter the two value \n");
    scanf("%lld %lld",&a,&b);
    {
        if (a<b)
        {
        }
        else
        {
            tem = a;
            a = b;
            b = tem;
        }
        printf("%lld ",a,b);
    }

    return 0;
}
