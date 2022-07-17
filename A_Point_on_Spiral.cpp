#include <bits/stdc++.h>
using namespace std;

bool reached(pair<int, int> curr, pair<int, int> end)
{

    if (curr.first == end.first && curr.second == end.second)
    {
        return true;
    }

    return false;
}

void solve()
{
    int x, y;
    cin >> x >> y;

    pair<int, int> end = make_pair(x, y);

    if (end.first == 0 && end.second == 0 || end.first == 1 && end.second == 0)
    {
        cout << 0;
        return;
    }

    pair<int, int> curr = make_pair(0, 0);

    int turns = -1, dist = 1;

    while (true)
    {
        turns++;
        for (int i = 0; i < dist; i++)
        {
            ((dist % 2 != 0) ? curr.first++ : curr.first--);
            if (reached(curr, end))
            {
                cout << turns;
                return;
            }
        }

        turns++;
        for (int i = 0; i < dist; i++)
        {
            ((dist % 2 != 0) ? curr.second++ : curr.second--);
            if (reached(curr, end))
            {
                cout << turns;
                return;
            }
        }

        dist++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}