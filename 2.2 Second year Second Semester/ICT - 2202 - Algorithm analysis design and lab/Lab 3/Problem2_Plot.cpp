
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int n, i, k, j, answer[5];

void Algo1(int a[])
{
    int m = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < m)
            m = a[i];
    answer[0] = m;
}


void Algo2(int t1[])
{
    int size = n, t2[n + 1];
    while (size >= 2)
    {
        int flag = 0;
        int x = ceil(size * 1.0 / 2);

        for (i = 0; i < x; i++)
        {
            if (2 * i + 1 < size)
                t2[i] = min(t1[2 * i], t1[2 * i + 1]);
            else
                flag = 1;
        }

        if (flag == 1)
            t2[x - 1] = t1[size - 1];

        for (i = 0; i < x; i++)
            t1[i] = t2[i];

        size = ceil(size * 1.0 / 2);
    }
    answer[1] = t2[0];
}


void Algo3(int a[])
{
    sort(a, a + n);
    answer[2] = a[0];
}


void Algo4(int a[])
{
    i = -1;
    int flag = 1, m, j;
    while (flag)
    {
        i++;
        m = a[i];
        flag = 0;
        for (j = 0; j < n; j++)
            if (m > a[j])
                flag = 1; //that means m is not minimum
    }
    answer[3] = m;
}
int main()
{
    cout << "\nRunning....\n";
    FILE *fp = NULL, *pl = NULL, *fd = NULL, *fm = NULL, *fn = NULL;
    fp = fopen("Algo-1.tmp", "w");
    fd = fopen("Algo-2.tmp", "w");
    fm = fopen("Algo-3.tmp", "w");
    fn = fopen("Algo-4.tmp", "w");
    for (int cycle = 1; cycle <= 10; cycle++)
    {
        LARGE_INTEGER frequency;
        LARGE_INTEGER t1, t2;
        double bothtime, algo1time, algo2time, algo3time, algo4time;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        srand(time(0));
        n = n + 50;
        int a[n + 1], b[n + 1], t[n + 1];
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 10000;
            b[i] = a[i];
            t[i] = a[i];
        }
        QueryPerformanceCounter(&t2);
        bothtime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo1(a);
        QueryPerformanceCounter(&t2);
        algo1time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fp, "%d %lf\n", n, algo1time );

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo2(t);
        QueryPerformanceCounter(&t2);
        algo2time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fd, "%d %lf\n", n, algo2time );

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo3(b);
        QueryPerformanceCounter(&t2);
        algo3time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fm, "%d %lf\n", n, algo3time );

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo4(a);
        QueryPerformanceCounter(&t2);
        algo4time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fn, "%d %lf\n", n, algo4time);
    }

    char *comm[] = {"set title \"Input Size vs. Execution Time (ms)\"", "plot 'Algo-1.tmp' lt 7 lw 2 lc 1 w l", "replot 'Algo-2.tmp' lt 7 lw 2 lc 4 w l", "replot 'Algo-3.tmp' lt 7 lw 2 lc 2 w l", "replot 'Algo-4.tmp' lt 7 lw 2 lc 7 w l"};
    pl = _popen("gnuplot -persist", "w");
    for (int i = 0; i < 5; i++)
        fprintf(pl, "%s\n", comm[i]);

    return 0;
}