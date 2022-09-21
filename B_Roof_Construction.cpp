#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    int h_sb = log2(n - 1);
    int flag = 1 << h_sb; // 2*h_sb

    for (int i = n - 1; i >= flag; i--)
    {
        cout << i << " ";
    }
    for (int i = 0; i < flag; i++)
    {
        cout << i << " ";
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/