#include <stdio.h>
int main()
{
    int i=1;
    //level er name jekonota hote pare.
    print:
        printf("%d ",i);
        i++;

        if (i<5)
            goto print;


    return 0;
}
