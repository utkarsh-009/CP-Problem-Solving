#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
INTUTION:
h1, h2,...hk,...,hn (Sorted Order of Heights)
let h2,hk be heights with minimum difference
** The arrangement that can be done is: **
=> Note: Max possible difficulty is n-1 (In case of completely sorted heights) , which is not possible as we want difference of heights at ends minimum
=> h2, hk+1,....hn ,h1 ,hk => Difficult will be => (n-2), where the only difficulty won't be at hn, h1
*/

void solve()
{
    int n;
    cin >> n;

    vector<int> h(n);

    int min_diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    sort(h.begin(), h.end());
    for (int i = 1; i < n; i++)
    {
        int diff = abs(h[i] - h[i - 1]);
        min_diff = min(min_diff, diff);
    }

    for (int i = 1; i < n; i++)
    {
        if (h[i] - h[i - 1] == min_diff)
        {
            cout << h[i - 1] << " ";

            for (int j = i + 1; j < n; j++)
            {
                cout << h[j] << " ";
            }

            for (int j = 0; j < i - 1; j++)
            {
                cout << h[j] << " ";
            }

            cout << h[i];
            return;
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/