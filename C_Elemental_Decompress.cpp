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

    vector<int> a(n + 1), p1(n + 1), p2(n + 1);
    bool flag = true;
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        adj[a[i]].push_back(i);
    }

    stack<int> empty_space_a;
    stack<int> empty_space_b;

    for (int i = n; i > 0; i--)
    {
        ll extra = adj[i].size();
        if (extra == 0)
        {
            if (empty_space_a.size() == 0 && empty_space_b.size() == 0)
            {
                flag = false;
                break;
            }

            ll pos = empty_space_a.top();
            empty_space_a.pop();
            p1[pos] = i;

            pos = empty_space_b.top();
            empty_space_b.pop();
            p2[pos] = i;
        }
        else if (extra == 1)
        {
            ll pos = adj[i][0];
            p1[pos] = p2[pos] = i;
        }
        else if (extra == 2)
        {
            ll pos1 = adj[i][0];
            ll pos2 = adj[i][1];

            p1[pos1] = i;
            empty_space_b.push(pos1);

            p2[pos2] = i;
            empty_space_a.push(pos2);
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;

        for (int i = 1; i <= n; i++)
        {
            cout << p1[i] << " ";
        }

        cout << endl;

        for (int i = 1; i <= n; i++)
        {
            cout << p2[i] << " ";
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