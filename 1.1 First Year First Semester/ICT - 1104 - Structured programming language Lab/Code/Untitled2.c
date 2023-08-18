#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long a[10005], n, i=0, ans;
    while(scanf("%lld", &n)==1)
    {
        a[i]=n;
        sort(a, a+i+1);
        if(i%2==0)
        {
            printf("%lld\n", a[i/2]);
        }
        else
        {
            ans = a[i/2]+a[(i/2)+1];
            printf("%lld\n", ans/2);
        }
        i++;
    }
    return 0;
}
