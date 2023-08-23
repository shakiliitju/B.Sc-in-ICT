
#include <bits/stdc++.h>
using namespace std;

int j, n = 6;
int m[7][7], s[7][7];
void MCM(int p[])
{
    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int q;
                q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}
print(int i, int j)
{
    if (i == j)
        cout << "A" << i;
    else
    {
        cout << "(";
        print(i, s[i][j]);
        print(s[i][j] + 1, j);
        cout << ")";
    }

}
int main()
{
    int p[7], z, y, x = 6;
    p[0] = 30, p[1] = 35, p[2] = 15, p[3] = 5, p[4] = 10, p[5] = 20, p[6] = 25;
    MCM(p);
    for (int i = 1; i <= n; i++)
    {
        z = 1;
        y = x;
        for (j = 1; j <= i; j++)
        {
            cout << m[z][y] << " ";
            z++, y++;
        }
        cout << endl;
        x--;
    }
    cout << endl
         << "Total cost = " << m[1][6] << endl;
    x = 6;
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        z = 1;
        y = x;
        for (j = 1; j <= i; j++)
        {
            cout << s[z][y] << " ";
            z++, y++;
        }
        cout << endl;
        x--;
    }
    cout << endl;
    print(1, 6);
    cout << endl;
}
