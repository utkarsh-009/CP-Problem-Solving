#include <bits/stdc++.h>
using namespace std;

/*
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1

1 < <= n/2+n%2 => i
n/2 + n%2 < < n => n - i + 1

Arr: 1, 2, 5, 8, 16 - 9 + 1, 16 - 15 + 1, 16- 16 + 1
=> 1, 2, 5, 8, 7, 2, 1

*/

void solve()
{
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    vector<int> ind_of_1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= n / 2 + n % 2 && v[i - 1] == 1)
        {
            ind_of_1.push_back(i);
        }

        else if (i > n / 2 + n % 2 && v[i - 1] == 1)
        {
            ind_of_1.push_back(n - i + 1);
        }
    }

    int sz = ind_of_1.size();
    int low = 0, high = sz - 1;
    int no_of_op = 0;
    int lowS = 0, highS = 0;

    while (true)
    {
        if (sum == s)
        {
            break;
        }
        if (high <= low)
        {
            no_of_op = -1;
            break;
        }

        if (ind_of_1[high] >= ind_of_1[low])
        {
            sum--;
            no_of_op += ind_of_1[low];
            lowS += ind_of_1[low];
            low++;
            ind_of_1[low] -= lowS;
            continue;
        }

        if (ind_of_1[high] < ind_of_1[low])
        {
            sum--;
            no_of_op += ind_of_1[high];
            highS += ind_of_1[high];
            high--;
            ind_of_1[high] -= highS;
            continue;
        }
    }

    cout << no_of_op;
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
        cout << "\n";
    }
}