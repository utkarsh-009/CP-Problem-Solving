#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool s = 0, c = 0;
    int rst = 0;
    for (int i = 0; i < n; i++)
    {
        // no s, no c
        if (a[i] == 0)
        {
            rst++;
            s = 0, c = 0;
        }
        // no s but c
        else if (a[i] == 1)
        {
            if (c)
            {
                rst++;
                s = 0, c = 0;
            }
            else
                s = 0, c = 1;
        }
        // s but no c
        else if (a[i] == 2)
        {
            if (s)
            {
                rst++;
                s = 0, c = 0;
            }
            else
                s = 1, c = 0;
        }
        // s and c both
        else
        {
            if (s && c)
            {
                rst++;
                s = 0, c = 0;
            }
            else if (s)
                c = 0;
            else if (c)
                s = 0;
            else
            {
                if (i < n - 1)
                {
                    if (a[i + 1] == 1)
                        ((!c) ? s = 0, c = 1 : s = 0, c = 0, rst++);
                    else if (a[i + 1] == 2)
                        ((!s) ? s = 1, c = 0 : s = 0, c = 0, rst++);
                    else if (a[i + 1] == 3)
                        s = 1, c = 0;
                }
            }
        }
    }

    cout << rst;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/