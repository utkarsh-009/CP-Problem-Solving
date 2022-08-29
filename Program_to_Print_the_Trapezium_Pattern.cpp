/*
Input  : 4
Output :
1*2*3*4*17*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11


Input : 2
Output :
1*2*5*6
  3*4
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sz = n * (n + 1);
    int ws = 0, low = 1, high = n * (n + 1);
    int level = n;
    while (low < high && level > 0)
    {
        int lvlsz = 2 * level;

        int l1 = low, l2 = high - (lvlsz - 1) / 2;
        int h1 = low + (lvlsz - 1) / 2, h2 = high;

        for (int i = 0; i < ws; i++)
        {
            cout << " ";
        }

        ws++;
        level--;

        // Pattern
        for (int i = l1; i <= h1; i++)
        {
            cout << i << "*";
        }

        cout << l2;
        for (int j = l2 + 1; j <= h2; j++)
        {
            cout << "*" << j;
        }

        low += lvlsz / 2;
        high -= lvlsz / 2;

        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}