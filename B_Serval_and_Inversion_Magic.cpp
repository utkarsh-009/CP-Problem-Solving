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

    int n;
    cin >> n;

    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int l = 0, h = n - 1;

    bool start = false;
    while (l < h)
    {
        if (s[l] != s[h] && !start)
        {
            start = true;
        }

        if (s[l] != s[h] && start)
        {
            s[l] = s[h];
        }

        else if (s[l] == s[h] && start)
        {
            break;
        }

        l++;
        h--;
    }

    l = 0, h = n - 1;
    while (l < h)
    {
        if (s[l] != s[h])
        {
            cout << "No";
            return;
        }
        l++;
        h--;
    }

    cout << "Yes";
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
        cout << '\n';
    }
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