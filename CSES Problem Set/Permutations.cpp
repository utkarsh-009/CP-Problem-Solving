#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
1 => 1
2 => NP
3 => NP
4 => 2 4 1 3
5 => 2 4 1 3 5
6 => 2 4 6 1 3 5
7 => 2 4 6 1 3 5 7
*/
void solve()
{
    int n;
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return;
    }

    int n1 = 1, n2 = 2;

    while (n2 <= n)
    {
        cout << n2 << " ";
        n2 += 2;
    }

    while (n1 <= n)
    {
        cout << n1 << " ";
        n1 += 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}