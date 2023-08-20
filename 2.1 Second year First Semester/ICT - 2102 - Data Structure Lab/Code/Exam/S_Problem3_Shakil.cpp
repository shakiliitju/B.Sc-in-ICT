#include <bits/stdc++.h>
using namespace std;

int Paths(int M, int N)
{
    if (M == 1 || N == 1)
        return 1;
    return Paths(M - 1, N) + Paths(M, N - 1);

}

int main()
{
    int M,N;
    cout << "Enter two value : " << endl;
    cin >> M >> N;
    cout << Paths(M, N);
    return 0;
}


