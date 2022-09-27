#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
// Inefficient Solution // TC: O(n*n*n)
void solve()
{
    int n;
    cin >> n;

    set<int> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
        s.insert(x);
    }

    int sz = s.size();
    for (int i = 1; i < n; i++)
    {
        int x = a[i - 1], y = a[i];
        if (x > y)
        {
            s.erase(x);
            for (int j = 0; j < n; j++)
            {
                if (a[j] == x)
                {
                    a[j] = 0;
                    i = 0;
                }
            }
        }
    }

    cout << sz - s.size();
}
*/
void solve()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    vector<ll> pref(n + 1), pref_comp(n + 1); // prefix vector to pre-compute no of distinct elements
    map<ll, ll> max_freq, freq;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        max_freq[v[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq.find(v[i]) == freq.end()) // new number
        {
            freq[v[i]]++;
            pref[i + 1] = pref[i] + 1;
        }
        else // repeated number
        {
            freq[v[i]]++;
            pref[i + 1] = pref[i];
        }

        // number completed its last index
        if (freq[v[i]] == max_freq[v[i]])
        {
            pref_comp[i + 1] = pref_comp[i] + 1;
        }
        else
        {
            pref_comp[i + 1] = pref_comp[i];
        }
    }

    ll ans = pref[n], last = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        // suffix not decreasing
        if (v[i] > last)
        {
            break;
        }

        if (pref_comp[i] == pref[i])
        {
            ans = pref[i];
        }

        last = v[i];
    }

    cout << ans;
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
