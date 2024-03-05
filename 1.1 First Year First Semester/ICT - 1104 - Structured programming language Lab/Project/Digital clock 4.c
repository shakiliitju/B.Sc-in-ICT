#include <stdio.h>
#include <windows.h>
int main()
{
    int h,m,s;
    h=0;
    m=0;
    s=0;
    while(1)
    {
        if(s>58)
        {
            m=m+1;
            s=0;
        }
        if(m>58)
        {
            h=h+1;
            m=0;
        }
        if(h>11)
        {
            h=0;
            m=0;
            s=0;
        }
        Sleep(1000);
        s=s+1;
        system("CLS");
        printf("\n\n\t\t\t\t     DIGITAL CLOCK");
        printf("\n\n\t\t\t\t HOUR : MINUTE : SECOND");
        printf("\n\n\t\t\t\t %02d : %02d : %02d\n",h,m,s);
    }
}
