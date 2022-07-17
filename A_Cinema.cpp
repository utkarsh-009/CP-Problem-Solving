#include <bits/stdc++.h>
using namespace std;

bool taken(multimap<int, int> seatsTaken, int x, int y)
{
    for (auto it = seatsTaken.find(x); it != seatsTaken.end() && it != seatsTaken.find(x + 1); it++)
    {
        if (it->second == y)
        {
            return true;
        }
    }

    return false;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    multimap<int, int> seatsPref;
    multimap<int, int> seatsTaken;

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;

        seatsPref.insert(make_pair(x, y));
    }

    for (auto it = seatsPref.begin(); it != seatsPref.end(); it++)
    {
        int x = it->first;
        int y = it->second;

        if (taken(seatsTaken, x, y))
        {
            y++;
            if (taken(seatsTaken, x, y))
            {
                y = it->second;
                x++;
            }
            seatsTaken.insert(make_pair(x, y));
            cout << x << " " << y << endl;
            continue;
        }

        seatsTaken.insert(make_pair(x, y));
        cout << x << " " << y << endl;
    }

    // for (auto i = seatsTaken.begin(); i != seatsTaken.end(); i++)
    // {
    //     cout << i->first << " " << i->second << endl;
    // }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}