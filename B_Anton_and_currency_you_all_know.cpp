#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    int len = str.length();
    int ind1 = len - 1, ind2 = len - 1;
    int last = str[ind2] - '0';

    for (int i = 0; i < len - 1; i++)
    {
        int num = str[i] - '0';

        if (num % 2 == 0)
        {
            if (str[ind2] > str[i])
            {
                swap(str[ind2], str[i]);
                ind1 = i;
                cout << str;
                return;
            }

            else
            {
                ind1 = i;
                continue;
            }
        }
    }

    if (ind1 == len - 1)
    {
        cout << -1;
        return;
    }

    swap(str[ind1], str[ind2]);
    cout << str;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}