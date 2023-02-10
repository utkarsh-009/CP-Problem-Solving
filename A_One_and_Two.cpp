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

    vector<int> a(n);
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
        {
            cnt2++;
        }
    }

    if (cnt2 % 2)
    {
        cout << -1;
    }
    else
    {
        int count = 0;
        int i;

        if (count == cnt2 / 2)
        {
            cout << 1;
        }
        else
        {
            for (i = 0; i < n && count < cnt2 / 2; i++)
            {
                if (a[i] == 2)
                {
                    count++;
                }
            }

            cout << i;
        }
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