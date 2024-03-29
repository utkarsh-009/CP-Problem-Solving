#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, m;
    cin >> n >> m;

    vector<int> a(n), pre(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        st.insert(a[i]);
        pre[i] = st.size();
    }

    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;

        cout << pre[l - 1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/