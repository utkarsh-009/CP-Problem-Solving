#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string w;
    cin >> w;

    ll p;
    cin >> p;

    int curr_sum = 0;
    int n = w.length();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        curr_sum += (w[i] - 'a') + 1;
        mp[w[i]]++;
    }

    if (curr_sum <= p)
    {
        cout << w;
        return;
    }

    map<char, int> del;

    for (int i = 122; i >= 97; i--)
    {
        char c = i;
        int val = c - 'a' + 1;

        while (mp[c]--)
        {
            curr_sum -= val;
            del[c]++;

            if (curr_sum <= p)
            {
                break;
            }
        }
        if (curr_sum <= p)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (del[w[i]] > 0)
        {
            del[w[i]]--;
            continue;
        }
        cout << w[i];
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/