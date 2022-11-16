#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[64][n];
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            for (int j = 0; j < 64; j++)
            {
                a[j][i] = (int)(x % 2);
                x /= 2;
            }
        }
        for (int i = 0; i < 64; i++)
        {
            long long count = 0;
            for (int j = 0; j < n; j++)
            {
                count += a[i][j];
                a[i][j] = count;
            }
        }

        while (q--)
        {
            int l1, r1, l2, r2, k;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            l1--;
            l2--;
            r1--;
            r2--;
            int totalf = r1 - l1 + 1;
            int totals = r2 - l2 + 1;
            int totalfo, totalso;
            if (l1 == 0)
            {
                totalfo = a[k][r1];
            }
            else
            {
                totalfo = a[k][r1] - a[k][l1 - 1];
            }
            if (l2 == 0)
            {
                totalso = a[k][r2];
            }
            else
                totalso = a[k][r2] - a[k][l2 - 1];
            long sum = (long)(totalf - totalfo) * (long)(totalso) + (long)(totalfo) * (long)(totals - totalso);
            cout << sum << endl;
        }
    }
    return 0;
}