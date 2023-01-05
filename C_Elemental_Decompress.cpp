#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
ll mod_exp(ll a, ll b, ll mod)
{
    int res = 1;     // Initialize result
    a = a % mod; // Update x if it is more than or equal to p
    if (a == 0) return 0; // In case x is divisible by p;

    while (b > 0)
    {
        // If y is odd, multiply x with result
        if (b & 1)
            res = (res*a) % mod;

        // y must be even now
        b = b>>1; // y = y/2
        a = (a*a) % mod;
    }
    return res;
}
*/

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    vector<int> a(n), p1(n), p2(n);
    map<int, bool> used1, used2;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (used1[a[i]] == false)
        {
            p1[i] = a[i];
            used1[a[i]] = true;
        }
        else if (used2[a[i]] == false)
        {
            p2[i] = a[i];
            used2[a[i]] = true;
        }
        else
        {
            flag = false;
        }
    }

    set<int> s1, s2;
    for (int i = 1; i <= n; i++)
    {
        if (used1[i] == false)
        {
            s1.insert(i);
        }

        if (used2[i] == false)
        {
            s2.insert(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (p2[i] == 0)
        {
            auto it = s2.upper_bound(p1[i]);
            if (it == s2.begin())
            {
                flag = false;
                break;
            }

            it--;
            p2[i] = *it;
            s2.erase(it);
        }
        else
        {
            auto it = s1.upper_bound(p2[i]);
            if (it == s1.begin())
            {
                flag = false;
                break;
            }

            it--;
            p1[i] = *it;
            s1.erase(it);
        }
    }

    if (flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;

        for (int x : p1)
        {
            cout << x << " ";
        }

        cout << endl;

        for (int x : p2)
        {
            cout << x << " ";
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