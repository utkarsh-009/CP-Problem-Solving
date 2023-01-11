#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Topic: Permutation Graph
-> In cycle of size n, we will need exactly n-1 operations to put every element in its correct position, i.e. to make a[i] = i
-> If there are 'c' cycles, then no of permutation needed to make a[i] = i, will be (n-c)
-> Now, if for any i, i-1 are in same cycle => operations will be (n-c-1)
-> if i,i-1 are not in same cycle => operations will be (n-c+1)
*/

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    if (is_sorted(a.begin(), a.end()))
    {
        cout << 1;
        return;
    }

    vector<int> comp(n + 1, 0);
    vector<bool> vis(n + 1, false);
    ll c = 0;

    // DFS to find cycle in which every element is
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ll curr = i;
            c++;
            while (true)
            {
                if (vis[curr])
                    break;

                comp[curr] = c;
                vis[curr] = true;
                curr = a[curr];
            }
        }
    }

    bool inSameCycle = false;
    for (int i = 2; i <= n; i++)
    {
        if (comp[i - 1] == comp[i])
        {
            inSameCycle = true;
            break;
        }
    }

    ((inSameCycle) ? cout << n - c - 1 : cout << n - c + 1);
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