
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int n, i, k, answer[3];
void Algo1(int a[])
{
    sort(a, a + n, greater<int>());
    answer[0] = a[k - 1];
}
void Algo2(int b[])
{
    sort(b, b + k, greater<int>());
    for (i = k; i < n; i++)
    {
        int x = b[i];
        for (int j = 0; j < k; j++)
            if (x > b[j])
                swap(b[j], x);
    }
    answer[1] = b[k - 1];
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
        n = n + 50;
        int a[n + 1], b[n + 1];
        k = rand() % n;
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 100000;
            b[i] = a[i];
        }
        QueryPerformanceCounter(&t2);
        bothtime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo1(a);
        QueryPerformanceCounter(&t2);
        algo1time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fprintf(fp, "%d %lf\n", n, algo1time + bothtime);

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);
        Algo2(b);
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