#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[100], n, h, s=0;
    cout << "Enter number of Process : ";
    cin >> n;
    cout << "Enter number of Head : ";
    cin >> h;
    cout << "Processes Sequence : ";
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        s += abs((h - a[i]));
        h = a[i];
    }
    cout << "\nHead Movement: " << s << endl;
}