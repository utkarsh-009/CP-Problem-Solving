#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int y;
    cin >> y;

    int ans = 0;
    for (int i = y + 1; i <= 9012; i++)
    {
        set<int> st;
        int x = i;
        while (x > 0)
        {
            st.insert(x % 10);
            x /= 10;
        }

        if (st.size() == 4)
        {
            ans = i;
            break;
        }
    }

    cout << ans;
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