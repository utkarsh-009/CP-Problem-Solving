#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int maxe = 1;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.insert(x);
        maxe = max(maxe, x);
    }

    int max_score = 0;

    for (int i = 1; i <= maxe && k; i++)
    {
        if (s.find(i) == s.end())
        {
            maxe = max(maxe, i);
            int score = maxe - i;
            max_score += score;
            k--;
        }
    }

    for (int i = 2 * n; i > n && k; i--)
    {
        if (s.find(i) == s.end())
        {
            s.insert(i);
            maxe = max(maxe, i);
            int score = maxe - i;
            max_score += score;
            k--;
        }
    }

    cout << max_score;
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/