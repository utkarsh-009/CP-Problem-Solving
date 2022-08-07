#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    set<int> dirty;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        dirty.insert(x);
    }

    if (dirty.find(1) != dirty.end() || dirty.find(n) != dirty.end())
    {
        cout << "NO";
        return;
    }

    for (auto it = dirty.begin(); it != dirty.end(); it++)
    {
        auto curr = it;
        int first = *curr, second = *(++curr), third = *(++curr);
        if (first + 1 == second && second + 1 == third)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
    return;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
