
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, t, at, bt, s = 0, s1 = 0;
  cout << "\nEnter total processes: ";
  cin >> n;

  int ta[n + 10], wt[n + 10], c[n + 10];
  vector<pair<int, int>> v;

  for (int i = 0; i < n; i++)
  {
    cout << "\nEnter P" << i + 1 << " Arrival Time: ";
    cin >> at;

    cout << "Enter P" << i + 1 << " Burst Time: ";
    cin >> bt;
    v.push_back({at, bt});
  }

  sort(v.begin(), v.end());

  t = 0;

  for (int i = 0; i < n; i++)
  {
    at = v[i].first;
    bt = v[i].second;

    if (t <= at)
    {
      t = at;
      t += bt;

      c[i] = t;
    }
    else
    {
      t += bt;
      c[i] = t;
    }
  }

  for (int i = 0; i < n; i++)
  {
    at = v[i].first;
    bt = v[i].second;

    ta[i] = c[i] - at;
    wt[i] = ta[i] - bt;
  }

  cout << "\nProcess  Waiting-time  Turnaround-time\n";
  for (int i = 0; i < n; i++)
  {
    cout << "  P" << i + 1 << "           " << wt[i] << "           " << ta[i] << endl;

    s += ta[i];
    s1 += wt[i];
  }
  double l = (s / n);
  double r = (s1 / n);
  cout << "\nAvg Turnaround Time : " << l << " \nAvg Waiting Time : " << r << endl;
}