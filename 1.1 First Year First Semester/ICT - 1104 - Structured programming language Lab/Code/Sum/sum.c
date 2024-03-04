#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the tow value\n");
    scanf("%d %d",&x,&y);
    long long int sum = x + y;
    printf("sum = %lld\n",sum);
    return 0;
}
