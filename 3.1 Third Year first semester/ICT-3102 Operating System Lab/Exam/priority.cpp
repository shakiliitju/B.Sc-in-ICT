#include <bits/stdc++.h>
using namespace std;
map<int, int> p;
int main()
{
    int n, m, t, k, x, s = 0, s1 = 0, g = 0, h, l;
    cout << "\nEnter number of processor : ";
    cin >> n;
    cout << endl;

    int ta[n + 10], wt[n + 10], rt[n + 10], c[n + 10], d[n + 10];
    pair<int, pair<int, int>> v[n + 10];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter P" << i + 1 << " Arrival Time: ";
        cin >> x;
        cout << "Enter P" << i + 1 << " Burst Time: ";
        cin >> k;
        cout << "Enter P" << i + 1 << " Prority: ";
        cin >> l;

        v[i].first = x;
        v[i].second.first = k;
        v[i].second.second = l;
    }

    sort(v, v + n);

    for (int i = 0; i < n; i++)
    {
        d[i] = v[i].second.first;
    }

    t = 0;

    while (1)
    {
        m = INT_MAX;
        g = 0;

        for (int j = 0; j < n; j++)
        {
            x = v[j].first;
            k = v[j].second.second;

            if (p[j] != -1)
            {
                if (x <= t)
                {
                    g = 1;

                    if (k < m)
                    {
                        h = j;
                        m = k;
                    }
                }
            }
        }

        if (g == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (p[j] != -1)
                {
                    t = v[j].first;
                    t++;
                    v[j].second.first--;
                    if (v[j].second.first == 0)
                    {
                        p[j] = -1;
                    }
                    c[j] = t;
                    break;
                }
            }
        }
        else
        {
            t++;
            v[h].second.first--;
            if (v[h].second.first == 0)
            {
                p[h] = -1;
            }
            c[h] = t;
        }

        g = 0;

        for (int j = 0; j < n; j++)
        {
            if (p[j] != -1)
            {
                g = 1;
            }
        }

        if (g == 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        x = v[i].first;
        k = d[i];

        ta[i] = c[i] - x;
        wt[i] = ta[i] - k;
        rt[i] = wt[i] + c[i];
    }

    cout << endl;
    cout << "\nProcess  Waiting-time  Turnaround-time  Completion-time  Response-time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  P" << i + 1 << "           " << wt[i] << "          " << ta[i] << "                " << c[i] << "               " << rt[i] << endl;
        s += rt[i];
    }

    cout << "\nAvg Response-time : " << (s * 1.0 / n) << "s" << endl;
    
}