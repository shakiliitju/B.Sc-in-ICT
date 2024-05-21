#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;
    printf("Enter Number of pages : ");
    cin >> n;

    for (i = 1; i <= n; i++)
        cin >> a[i];
    printf("Enter Number of frames : ");
    cin >> no;
    for (i = 0; i < no; i++)
        frame[i] = -1;
    j = 0;
    printf("String\t Frames\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t", a[i]);
        avail = 0;
        for (k = 0; k < no; k++)
            if (frame[k] == a[i])
                avail = 1;
        if (avail == 0)
        {
            frame[j] = a[i];
            j = (j + 1) % no;
            count++;
            for (k = 0; k < no; k++)
                printf("%d\t", frame[k]);
        }
        printf("\n");
    }
    printf("\nPage Fault : %d", count);
    return 0;
}