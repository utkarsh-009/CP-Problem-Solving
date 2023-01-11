#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
-> ai = k1p, aj = k2p. For any prime p, ai and aj should have only one multiple
-> GOAL: We want only one index s.t. (ai+x)%p = 0
-> We will store frequency of modulous (%) of size p:
-> CASE1: if any two elements are equal then ans is possible
-> CASE2: Generate freq table for every prime p
    Find some value k, 0<=k<=p-1, such that freq[k] <= 1 => Apply (k-1) shifts
    x mod p = k-p
-> if no such k exists => Answer is possible; Else using CRT we can get the value of x => Ans is possible

*/

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    vector<ll> a(n), primes;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] == a[i])
        {
            cout << "NO";
            return;
        }
    }

    for (int i = 2; i < 60; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (j == i)
            {
                primes.push_back(i);
            }
            else if (i % j == 0)
            {
                break;
            }
        }
    }

    for (ll i = 0; i < primes.size(); i++)
    {
        ll prime = primes[i];
        vector<ll> moduloFreq(prime);

        for (int j = 0; j < n; j++)
        {
            moduloFreq[a[j] % prime]++;
        }

        if (*min_element(moduloFreq.begin(), moduloFreq.end()) >= 2)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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