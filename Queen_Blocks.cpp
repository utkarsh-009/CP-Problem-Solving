#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int a[9][9];
    int Kx = 0, Ky = 0;
    cin >> Kx >> Ky;

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if (i == Kx && j == Ky)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    // C1
    if (Kx == 1 && Ky == 1)
    {
        a[Kx + 2][Ky + 1] = 2;
        a[Kx + 1][Ky + 2] = 2;
    }
    else if (Kx == 1 && Ky == 8)
    {
        a[Kx + 2][Ky - 1] = 2;
        a[Kx + 1][Ky - 2] = 2;
    }
    else if (Kx == 8 && Ky == 1)
    {
        a[Kx - 2][Ky + 1] = 2;
        a[Kx - 1][Ky + 2] = 2;
    }
    else if (Kx == 8 && Ky == 8)
    {
        a[Kx - 1][Ky - 2] = 2;
        a[Kx - 2][Ky - 1] = 2;
    }
    // C2
    else if (Kx == 1)
    {
        a[Kx + 2][Ky - 1] = 2;
        a[Kx + 2][Ky + 1] = 2;
    }
    else if (Ky == 1)
    {
        a[Kx + 1][Ky + 2] = 2;
        a[Kx - 1][Ky + 2] = 2;
    }
    else if (Kx == 8)
    {
        a[Kx - 2][Ky - 1] = 2;
        a[Kx - 2][Ky + 1] = 2;
    }
    else if (Ky == 8)
    {
        a[Kx + 1][Ky - 2] = 2;
        a[Kx - 1][Ky - 2] = 2;
    }
    // C3
    else
    {
        if (Kx < 8 && Kx > 4 && Ky < 8 && Ky > 4)
        {
            a[Kx - 1][Ky - 2] = 2;
            a[Kx + 1][Ky - 2] = 2;
            a[Kx - 2][Ky + 1] = 2;
        }
        if (Kx < 8 && Kx > 4 && Ky < 5 && Ky > 1)
        {
            a[Kx - 2][Ky - 1] = 2;
            a[Kx - 2][Ky + 1] = 2;
            a[Kx + 1][Ky - 2] = 2;
        }

        if (Kx < 5 && Kx > 1 && Ky < 8 && Ky > 4)
        {
            a[Kx + 1][Ky - 2] = 2;
            a[Kx - 1][Ky - 2] = 2;
            a[Kx - 2][Ky + 1] = 2;
        }

        if (Kx > 1 && Kx < 5 && Ky < 5 && Ky > 1)
        {
            a[Kx + 2][Ky + 1] = 2;
            a[Kx + 2][Ky - 1] = 2;
            a[Kx - 1][Ky + 2] = 2;
        }
    }

    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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
    }
}