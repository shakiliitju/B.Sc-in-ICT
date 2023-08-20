#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, f1 = 0, f2 = 1, i;
    cin >> n;

    if (n < 1)
    cout << f1 << " ";

    for (i = 1; i < n; i++)
    {
        cout << f2 << " ";
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    return 0;
}
