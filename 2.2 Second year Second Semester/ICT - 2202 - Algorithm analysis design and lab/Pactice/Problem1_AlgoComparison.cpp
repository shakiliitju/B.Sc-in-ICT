#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int n, i, k;
void Algo1(int a[])
{
    sort(a, a + n, greater<int>());
    cout << "\nOutput: " << a[k - 1] << endl;
}
void Algo2(int b[])
{
    sort(b, b + k, greater<int>());
    for (i = k; i < n; i++)
    {
        int x = b[i];
        for (int j = 0; j < k; j++)
            if (x > b[j])
                swap(b[j], x); f
    }
    cout << "\nOutput: " << b[k - 1] << endl;
}
int main()
{
    for (int p = 1; p <= 20; p++)
    {
        cout <<endl<<"Test : " << p << endl;
        LARGE_INTEGER frequency; 
        LARGE_INTEGER t1, t2;    
        double gentime, algo1time, algo2time;
        QueryPerformanceFrequency(&frequency); 
        QueryPerformanceCounter(&t1);       
        srand(time(0));
        n = rand() % 10000;
        int a[n + 1], b[n + 1];
        k = rand() % n;
        for (i = 0; i < n; i++)
        {
            a[i] = rand() % 10000;
            b[i] = a[i];
        }
        QueryPerformanceCounter(&t2); 
        gentime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;

        QueryPerformanceFrequency(&frequency);
        QueryPerformanceCounter(&t1);        
        Algo1(a);
        QueryPerformanceCounter(&t2); 
        algo1time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-1 is: " << algo1time + gentime << " ms." << endl;

        QueryPerformanceFrequency(&frequency); 
        QueryPerformanceCounter(&t1);          
        Algo2(b);
        QueryPerformanceCounter(&t2); 
        algo2time = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        cout << "Required time for Algo-2 is: " << algo2time + gentime << " ms." << endl
             << endl;
    }
    return 0;
}
