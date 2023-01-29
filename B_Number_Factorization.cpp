#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void printPrimeFactorsEff(int n, unordered_map<int, int> &mp)
{
    if (n <= 1)
    {
        return;
    }

    while (n % 2 == 0)
    {
        // cout << 2 << " ";
        mp[2]++;
        n = n / 2;
    }

    while (n % 3 == 0)
    {
        // cout << 3 << " ";
        mp[3]++;
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i = i + 6)
    {
        while (n % i == 0)
        {
            // cout << i << " ";
            mp[i]++;
            n = n / i;
        }

        while (n % (i + 2) == 0)
        {
            // cout << i + 2 << " ";
            mp[i + 2]++;
            n = n / (i + 2);
        }
    }

    if (n > 3)
    {
        // cout << n << " ";
        mp[n]++;
    }
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    unordered_map<int, int> mp;
    printPrimeFactorsEff(n, mp);

    int mx = 1;
    for (auto x : mp)
    {
        mx = max(mx, x.second);
    }

    //  Multiply all number with decresing the prime factor's power everytime 
    int res = 0;
    for (int i = 0; i < mx; i++)
    {
        int now = 1;
        for (auto it : mp)
        {
            if (it.second > 0)
            {
                mp[it.first] -= 1;
                now *= it.first;
            }
        }
        res += now;
    }

    cout << res;
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