
//Function Call

#include<stdio.h>

int mul (int x, int y)
{
    int r;
    r = x*y;
    return (r);
}

main()
{
    int x, y;
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d\n",mul(x,y));

}
