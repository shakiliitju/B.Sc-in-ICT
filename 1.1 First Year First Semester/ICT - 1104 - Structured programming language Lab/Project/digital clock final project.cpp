#include <stdio.h>
#include <windows.h>
int main()
{
    int h=0,m=0,s=0;
start:;
    for(h=0; h<24; h++)
    { while(1)
        for(m=0; m<60; m++)
        {
            for(s=0; s<60; s++)
            {
                system("CLS");
                printf("\n\n\t\t\t\t     DIGITAL CLOCK");
                printf("\n\n\t\t\t\t HOUR : MINUTE : SECOND");
                printf("\n\n\t\t\t\t      %02d : %02d : %02d\n",h,m,s);
                Sleep(1000);
            }
            s=0;
        }
        m=0;
    }
    goto start;
}
