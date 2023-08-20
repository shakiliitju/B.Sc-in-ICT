
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

bool prime[MAX + 1];

int sum[MAX + 1];

void Shakil()
{
    memset(prime, true, sizeof(prime));
    memset(sum, 0, sizeof(sum));
    prime[1] = false;

    for (int p = 2; p * p <= MAX; p++)
    {
        if (prime[p])
        {
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }

    for (int i = 1; i <= MAX; i++)
    {
        if (prime[i] == true)
            sum[i] = 1;

        sum[i] += sum[i - 1];
    }
}

int main()
{

    Shakil();
    int l, r;
    cout << "Enter two value : "<<endl;
    cin >> l >> r;
    int c = (sum[r] - sum[l - 1]);
    cout << c << endl;

    return 0;
}
