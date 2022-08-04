#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int r1, r2, r3, d2;
    r1 = r2 = r3 = d2 = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int elm = arr[i][j];
            if (i == 0)
            {
                r1 += elm;
            }
            if (i == 1)
            {
                r2 += elm;
            }
            if (i == 2)
            {
                r3 += elm;
            }
            if (i == 2 && j == 0 || i == 1 && j == 1 || i == 0 && j == 2)
            {
                d2 += elm;
            }
        }
    }

    int magicSum = (r1 + r2 + r3) / 2;
    arr[0][0] = magicSum - r1;
    arr[1][1] = magicSum - r2;
    arr[2][2] = magicSum - r3;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}