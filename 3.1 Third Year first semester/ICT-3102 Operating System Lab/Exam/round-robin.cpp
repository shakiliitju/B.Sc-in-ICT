
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t, k, x, s = 0, s1 = 0, g = 0, time, l, r;
    cout << "\nEnter number of processor : ";
    cin >>n;
    cout << "Enter time quantum : ";
    cin >> time;
    cout << endl;

    vector<pair<int, int>> v;
    map<int, int> p, h;

    int ta[n + 10], wt[n + 10], c[n + 10], d[n + 10];
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter P" << i + 1 << " Arrival Time: ";
        cin >> x;

        cout << "Enter P" << i + 1 << " Burst Time: ";
        cin >> k;

        v.push_back({x, k});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        d[i] = v[i].second;
    }

    t = 0;

    while (1)
    {

        g = 0;

        if (!q.empty())
        {
            r = q.front();
            l = min(v[r].second, time);
            t += l;
            v[r].second -= l;
            q.pop();

            if (v[r].second == 0)
            {
                p[r] = -1;
                c[r] = t;
            }

            for (int i = 0; i < n; i++)
            {
                if (p[i] != -1 && h[i] != -1)
                {
                    x = v[i].first;

                    if (x <= t)
                    {
                        q.push(i);
                        h[i] = -1;
                    }
                }
            }

            if (p[r] != -1)
            {
                q.push(r);
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (p[i] != -1)
                {
                    q.push(i);
                    t = v[i].first;
                    h[i] = -1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (p[i] != -1)
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
    }

    cout << endl;
    cout << "\nProcess  Waiting-time  Turnaround-time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "  P" << i + 1 << "           " << wt[i] << "           " << ta[i] << endl;

        s += ta[i];
        s1 += wt[i];
    }
    cout << "\nAvg Turnaround Time : " << (s * 1.0 / n) << "s"<<endl;
    cout <<"\nAvg Waiting Time : " << (s1 * 1.0 / n) << "s" << endl;
}