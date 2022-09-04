#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
n = 7, a = 5, b = 3
abcabca
n = 6, a = 1, b = 1
aaaaaa
n = 6, a = 6, b = 1
aaaaaa
n = 5, a = 2, b = 2
ababa
*/

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++)
    {
        int dist = 'a' + i % b;
        char c = dist;
        cout << c;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << endl;
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/