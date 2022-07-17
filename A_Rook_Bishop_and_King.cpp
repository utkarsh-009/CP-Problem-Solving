#include <bits/stdc++.h>
using namespace std;

int rook(pair<int, int> s, pair<int, int> e)
{
    int dx = e.first - s.first;
    int dy = e.second - s.second;

    if (dx == 0 || dy == 0)
    {
        return 1;
    }

    return 2;
}

int bishop(pair<int, int> s, pair<int, int> e)
{
    int dx = e.first - s.first;
    int dy = e.second - s.second;

    pair<int, int> d = make_pair(dx, dy);

    if ((abs(dx) + abs(dy)) % 2 != 0)
    {
        return 0;
    }

    if (abs(dx) == abs(dy))
    {
        return 1;
    }

    return 2;
}

int king(pair<int, int> s, pair<int, int> e)
{
    int dx = e.first - s.first;
    int dy = e.second - s.second;

    if (dx == 0 && dy == 0 || dx == 0 || dy == 0)
    {
        return abs(dx) + abs(dy);
    }

    if (abs(dx) == abs(dy))
    {
        return (abs(dx) + abs(dy)) / 2;
    }

    int mn = min(abs(dx), abs(dy));

    int cnt = 0;

    if (mn == abs(dx))
    {
        ((dy > 0) ? dy -= abs(dx) : dy += abs(dx));
        cnt = mn + abs(dy);
        return cnt;
    }

    ((dx > 0) ? dx -= abs(dy) : dx += abs(dy));
    cnt = mn + abs(dx);
    return cnt;
}

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    pair<int, int> start = make_pair(x1, y1);
    pair<int, int> end = make_pair(x2, y2);

    cout << rook(start, end) << " " << bishop(start, end) << " " << king(start, end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}