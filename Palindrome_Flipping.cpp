#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<char> bin(n);
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bin[i];
        ((bin[i] - '0') ? cnt1++ : cnt0++);
    }

    if (n % 2 == 0 && cnt0 % 2 == 0 && cnt1 % 2 == 0)
    {
        cout << "YES";
    }

    else if (n % 2 != 0 && ((cnt0 % 2 != 0 && cnt1 % 2 == 0) || (cnt0 % 2 == 0 && cnt1 % 2 != 0)))
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
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
