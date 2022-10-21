#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// s.insert() operation for every element are much costlier than s(a.begin(), a.end()); ,where a is vector which stores all elements
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
    {
        cin >> x;
    }

    int ans = 0;
    for (int k = 1; k <= n; ++k) // to find kmax
    {
        multiset<int> ms(a.begin(), a.end());
        for (int i = 0; i < k; ++i) // k-stages => for i = 0 to i = k-1
        {
            auto it = ms.upper_bound(k - i); // gives iterator of element just less than or equal to k - i + 1
            if (it == ms.begin())            // all elements are greater than k - i
            {
                break;
            }

            ms.erase(--it);
            if (!ms.empty())
            {
                int x = *ms.begin();
                ms.erase(ms.begin());
                ms.insert(x + k - i);
            }
        }

        /*
        if Alice wins for k stages => there will be k less elements in the multiset as after every win of Alice,
        Bob won't be able to insert element of value k-x+1. So, after k wins => there will be k less elements in multiset
        */
        if (ms.size() + k == n)
            ans = k;
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

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/