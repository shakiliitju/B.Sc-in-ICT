#include <bits/stdc++.h>
using namespace std;
map<int, int> p;
int main()
{
    int n, m, t, k, x, s = 0, s1 = 0, g = 0, h, l;
    cout << "\nEnter number of processor : ";
    cin >> n;

    int ta[n + 10], wt[n + 10], c[n + 10];
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

    t = 0;

    for (int i = 0; i < n; i++)
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
                    p[j] = -1;
                    t = v[j].first;
                    t += v[j].second.first;
                    c[j] = t;
                    break;
                }
            }
        }
        else
        {
            p[h] = -1;
            t += v[h].second.first;
            c[h] = t;
        }
    }

    for (int i = 0; i < n; i++)
    {
        x = v[i].first;
        k = v[i].second.first;

        ta[i] = c[i] - x;
        wt[i] = ta[i] - k;
    
    }

    cout << endl;
    cout << "\nProcess  Waiting-time  Turnaround-time  Completion-time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  P" << i + 1 << "           " << wt[i] << "           " << ta[i] << "           " << c[i] << endl;
        
        s += ta[i];
        s1 += wt[i];
    }

    cout << "\nAvg Turnaround Time : " << (s * 1.0 / n) << "s" << endl;
    cout << "Avg Waiting Time : " << (s1 * 1.0 / n) << "s" << endl;
}