#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
EFFICIENT SOLUTION:
void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int cnt0 = count(a.begin(), a.end(), 0);
    int cnt1 = count(a.begin(), a.end(), 1);
    int used = min(cnt1, cnt0);
    int ans = used;
    ans += (cnt1 - used)/3;

    cout<<ans;
}
*/

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    stack<int> s;
    int cnt = 0;
    // for 10, 01
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(a[i]);
        }
        else
        {
            if (a[i] != s.top())
            {
                cnt++;
                s.pop();
            }
            else
            {
                s.push(a[i]);
            }
        }
    }

    // for 111, 11111,....
    // As 1^1 = 0 => XOR of two ones is 0 => We will replace pair of 1's with 0 => 0 1 found => cnt++
    while (s.size() >= 2)
    {
        int curr = s.top();
        s.pop();
        if (curr == s.top())
        {
            s.pop();
            s.push(0);
        }
        else
        {
            cnt++;
            s.pop();
        }
    }

    cout << cnt;
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