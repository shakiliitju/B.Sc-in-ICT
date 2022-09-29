#include <stdio.h>
int main()
{
    int page[] = {7,1,0,2,0,3,4,5};
    int pageFaults = 0;
    int frames = 3;
    int m, n, s, pages;
    pages = sizeof(page)/sizeof(page[0]);



    printf("String \t Frame 1 \t Frame 2 \t Frame 3");
    int temp[frames];
    for (m = 0; m < frames; m++)
    {
        temp[m] = -1;
    }

    for (m = 0; m < pages; m++)
    {
        s = 0;

        for (n = 0; n < frames; n++)
        {
            if (page[m] == temp[n])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;

        if ((pageFaults <= frames) && (s == 0))
        {
            temp[m] = page[m];
        }
        else if (s == 0)
        {
            temp[(pageFaults - 1) % frames] = page[m];
        }

        printf("\n");
        printf("%d\t", page[m]);
        for (n = 0; n < frames; n++)
        {
            if (temp[n] != -1)
                printf(" %d\t\t", temp[n]);
            else
                printf(" - \t\t");
        }
    }

    printf("\n\nTotal Page Faults:%d\n", pageFaults);
    return 0;
}

// int i, page[1000], x, frames;
// int pageFaults = 0;
// int m, n, s, pages;
// printf("Number of sting : ");
// scanf("%d", &x);

// for (i=0; i<x; i++)
// {
//     scanf("%d", &page[i]);
// }
// printf("Number of frames : ");
// scanf("%d", &frames);
// pages = sizeof(page) / sizeof(page[0]);
