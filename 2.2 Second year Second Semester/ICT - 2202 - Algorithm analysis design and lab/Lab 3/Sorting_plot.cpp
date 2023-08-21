#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int i, n, j;
void merge(int f1, int l1, int f2, int l2, int a[])
{
    int left[n], right[n], ls = 0, rs = 0;
    for (i = f1; i <= l1; i++)
        left[ls++] = a[i];
    for (i = f2; i <= l2; i++)
        right[rs++] = a[i];
    int j = 0;
    i = 0;
    while (i < ls && j < rs)
    {
        if (left[i] <= right[j])
            a[f1++] = left[i++];
        else
            a[f1++] = right[j++];
    }
    while (i < ls)
        a[f1++] = left[i++];
    while (j < rs)
        a[f1++] = right[j++];
}
void mergesort(int f, int l, int a[])
{
    if (f == l)
        return;
    int m;
    m = f + ((l - f) / 2);
    mergesort(f, m, a);
    mergesort(m + 1, l, a);
    merge(f, m, m + 1, l, a);
}
void insertion_sort(int a[])
{
    for (i = 1; i < n; i++)
    {
        int temp = a[i], flag = 0;
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] >= temp)
                a[j + 1] = a[j];
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            a[j + 1] = temp;
        else
            a[0] = temp;
    }
}
int main()
{
    cout << "\nRunning....\n";
    FILE *fp = NULL, *pl = NULL, *fd = NULL;
    fp = fopen("Algo-1.tmp", "w");
    fd = fopen("Algo-2.tmp", "w");
    for (int cycle = 1; cycle <= 10; cycle++)
    {
        LARGE_INTEGER frequency;
        LARGE_INTEGER t1, t2;
        double bothtime, algo1time, algo2time;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        srand(time(0));
        n = n + 200;
        int a[n + 1], b[n + 1];
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 100000;
            b[i] = a[i];
        }

        QueryPerformanceCounter(&t2);
        bothtime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        insertion_sort(a);
        QueryPerformanceCounter(&t2);
        algo1time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fp, "%d %lf\n", n, algo1time + bothtime);

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        mergesort(0, n - 1, b);
        QueryPerformanceCounter(&t2);
        algo2time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fd, "%d %lf\n", n, algo2time + bothtime);
    }

    char *comm[] = {"set title \"Input Size vs. Execution Time (ms)\"", "plot 'Algo-1.tmp' lt 7 lw 2 lc 1 w l", "replot 'Algo-2.tmp' lt 7 lw 2 lc 4 w l"};
    pl = _popen("gnuplot -persist", "w");
    for (int i = 0; i < 3; i++)
        fprintf(pl, "%s\n", comm[i]);

    return 0;
}