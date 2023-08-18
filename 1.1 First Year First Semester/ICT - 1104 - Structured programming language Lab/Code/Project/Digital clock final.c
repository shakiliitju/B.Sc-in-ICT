
/// Digital Clock Project

/// Group 19
/// MD Shakil Hossain (192340)
/// Yeasmin Aktar Mitu (192309)
/// Md Asaduzzaman (180203)

#include <stdio.h>
#include <windows.h>/*we are including windows file
 (it's connected to function sleep()),
  which means that this will only work for windows,
   so if you're using another OS,
    search in google for other versions of sleep().*/

int main()
{
    int h=0,m=0,s=0;//we add hours, minutes and seconds to our program

 while(1)
 {

     //update hour, minute and second
    for(h=0; h<24; h++)
    {
        for(m=0; m<60; m++)
        {

            //increase second
            for(s=0; s<60; s++)
            {
                //clear output screen
                system("CLS");

                printf("\n\n\t\t\t\t     DIGITAL CLOCK");
                printf("\n\n\t\t\t\t HOUR : MINUTE : SECOND");
                printf("\n\n\t\t\t\t      %02d : %02d : %02d\n",h,m,s);

                 //clear output buffer in gcc
                fflush(stdout);


                Sleep(1000);/*we add Delay of 1000 milliseconds,
                             which makes a second and we will use that in sleep().*/
            }
            s=0;
        }
        m=0;
    }
 }

 return 0;
}

