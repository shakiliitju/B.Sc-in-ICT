#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t, at, bt, s = 0, s1 = 0, g = 0, h;
    cout << "\nEnter total processes: ";
    cin >> n;

    int ta[n + 10], wt[n + 10], c[n + 10];
    vector<pair<int, int>> v;
    map<int, int> p;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter P" << i << " Arrival Time: ";
        cin >> at;

        cout << "Enter P" << i << " Burst Time: ";
        cin >> bt;
        v.push_back({at, bt});
    }

    sort(v.begin(), v.end());

    t = 0;

    for (int i = 0; i < n; i++)
    {
        m = INT_MAX;

        for (int j = 0; j < n; j++)
        {
            at = v[j].first;
            bt = v[j].second;

            if (p[j] != -1)
            {
                if (at <= t)
                {
                    g = 1;

                    if (bt <= m)
                    {
                        h = j;
                        m = bt;
                    }
                }
            }
        }

        if (g == 0)
        {
            for (int j = 0; i < n; i++)
            {
                if (p[j] != -1)
                {
                    p[j] = -1;
                    t = v[j].first;
                    t += v[j].second;
                    c[j] = t;
                    break;
                }
            }
        }
        else
        {
            p[h] = -1;
            t += v[h].second;
            c[h] = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        at = v[i].first;
        bt = v[i].second;

        ta[i] = c[i] - at;
        wt[i] = ta[i] - bt;
    }

    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i << " Turnaround Time " << ta[i] << endl;
        cout << "P" << i << " Waiting Time  " << wt[i] << endl;
        s += ta[i];
        s1 += wt[i];
    }
    double l = (s * 1.0 / n);
    double r = (s1 * 1.0 / n);
    cout << "\nAvg Turnaround Time  " << l << " \nAvg Waiting Time " << r << endl;
}