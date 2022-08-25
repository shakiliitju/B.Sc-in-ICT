
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int n, i, k, j;
void Algo1(int a[])
{
    int m = a[0];
    for (i = 1; i < n; i++)
        if (a[i] < m)
            m = a[i];
    cout << "\nMinimum is: " << m << endl;
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
    cout << "\nMinimum is: " << t2[0] << endl;
}
void Algo3(int a[])
{
    sort(a, a + n);
    cout << "\nMinimum is: " << a[0] << endl;
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
    cout << "\nMinimum is: " << m << endl;
}
int main()
{
    srand(time(0));
    for (int cycle = 1; cycle <= 10; cycle++)
    {
        cout << "\n\ncycle: " << cycle << endl;
        LARGE_INTEGER frequency; // ticks per sec
        LARGE_INTEGER t1, t2;    // ticks
        double bothtime, algo1time, algo2time, algo3time, algo4time;
        QueryPerformanceFrequency(&frequency); // ticks per sec
        QueryPerformanceCounter(&t1);          //counting start
        
        n = rand() % 10000;
        int a[n + 1], b[n + 1], t[n + 1];
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 10000;
            b[i] = a[i];
            t[i] = a[i];
        }
        QueryPerformanceCounter(&t2); //counting end
        bothtime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

        QueryPerformanceFrequency(&frequency); // ticks per sec
        QueryPerformanceCounter(&t1);          //counting start
        Algo1(a);
        QueryPerformanceCounter(&t2); //counting end
        algo1time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-1 is: " << algo1time + bothtime << " ms." << endl;

        QueryPerformanceFrequency(&frequency); // ticks per sec
        QueryPerformanceCounter(&t1);          //counting start
        Algo2(t);
        QueryPerformanceCounter(&t2); //counting end
        algo2time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-2 is: " << algo2time + bothtime << " ms." << endl;

        QueryPerformanceFrequency(&frequency); // ticks per sec
        QueryPerformanceCounter(&t1);          //counting start
        Algo3(b);
        QueryPerformanceCounter(&t2); //counting end
        algo3time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-3 is: " << algo3time + bothtime << " ms." << endl;

        QueryPerformanceFrequency(&frequency); // ticks per sec
        QueryPerformanceCounter(&t1);          //counting start
        Algo4(a);
        QueryPerformanceCounter(&t2); //counting end
        algo4time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-4 is: " << algo4time + bothtime << " ms." << endl
             << endl;
    }
    return 0;
}
