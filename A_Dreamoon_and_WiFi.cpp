#include <bits/stdc++.h>
#include <iomanip>
#define ll long long
#define mod 1000000007
using namespace std;

int findFact(int n)
{
    return n == 1 ? 1 : n * findFact(n - 1);
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("day3p2INPUT.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    string sent, rec;
    cin >> sent;
    cin >> rec;

    int n = rec.length();
    // set<string> st;
    int p1 = 0, p2 = 0, m1 = 0, m2 = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (sent[i] == '+')
        {
            p1++;
        }
        if (sent[i] == '-')
        {
            m1++;
        }
        if (rec[i] == '+')
        {
            p2++;
        }
        if (rec[i] == '-')
        {
            m2++;
        }
        if (rec[i] == '?')
        {
            q++;
        }
    }

    int m = m1 - m2, p = p1 - p2;
    if (p2 > p1 || m2 > m1)
    {
        cout << fixed;
        cout << setprecision(12) << 0.0;
    }
    else if (q == 0)
    {
        cout << fixed;
        cout << setprecision(12) << 1.0;
    }
    else if (m == 0 || p == 0)
    {
        cout << fixed;
        cout << setprecision(12) << 1.0 / (pow(2, q));
    }
    else
    {
        double total = pow(2, q);
        double valid = findFact(m + p) / (findFact(m) * findFact(p));

        cout << fixed;
        cout << setprecision(12) << valid / total;
    }
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