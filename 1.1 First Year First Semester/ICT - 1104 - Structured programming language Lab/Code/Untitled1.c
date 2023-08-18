#include <stdio.h>
int main()
{
    int B,P,M,ans;
    while (scanf("%d\n%d\n%d",&B,&P,&M) != EOF)
    {
        ans = 1;
        B %= M;

        while (P)
        {
            if (P & 1)
                ans = (ans * B) % M;
            B = (B * B) % M;
            P >>= 1;

        }
        printf("%d\n", ans);
    }

    return 0;
}
