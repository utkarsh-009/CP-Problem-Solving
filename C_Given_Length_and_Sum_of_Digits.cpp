#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, s;
    cin >> n >> s;

    if (s == 0)
    {
        if (n == 1)
        {
            cout << "0 0";
        }
        else
        {
            cout << "-1 -1";
        }
        return;
    }

    string maxi = "";
    string mini = "";

    for (int i = 0; i < n; i++)
    {
        int x = min(9, s);
        s -= x;

        maxi.push_back('0' + x);
    }

    if (s > 0)
    {
        cout << "-1 -1";
        return;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        mini.push_back(maxi[i]);
    }

    int j = 0;
    while (mini[j] == '0')
    {
        j++;
    }

    mini[j]--;
    mini[0]++;

    cout << mini << " " << maxi;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/