#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define Size 100010
using namespace std;

vector<ll> adj[Size];
vector<ll> cats(Size);
vector<bool> vis(Size, false);
ll n, m, ans = 0;

void dfs(ll node, ll cons)
{
    if (cats[node])
        cons++;
    else
        cons = 0;

    if (cons > m)
        return;

    vis[node] = true;
    bool isLeaf = true;

    for (int next : adj[node])
    {
        if (!vis[next])
        {
            dfs(next, cons);
            isLeaf = false;
        }
    }

    if (isLeaf)
        ans++;
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    cin >> n >> m;

    // cats exist or not
    for (int i = 0; i < n; i++)
    {
        cin >> cats[i];
    }

    // edges
    for (int i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--, v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(0, 0);

    cout << ans;
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