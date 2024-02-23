#include <stdio.h>
int main()
{

    long long a,b,c,d,e,i,tem;
    scanf("%lld %lld",&a,&b);
    // for (i=0 ; i<=5; i++)
    {
        if (a<b)
        {
            // printf("%lld ",a,b);
        }
        else
        {
            tem = a;
            a = b;
            b = tem;
            //printf("%lld ",a,b);
        }
        printf("%lld ",a,b);
    }




    return 0;
}
