#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

// void solve()
// {
//     // #ifndef ONLINE_JUDGE
//     //     freopen("day3p2INPUT.txt", "r", stdin);
//     //     freopen("output.txt", "w", stdin);
//     // #endif

//     int n, k;
//     cin >> n >> k;

//     string s = "";
//     for (int i = 0; i < n - 2; i++)
//     {
//         s.push_back('a');
//     }
//     s += "bb";
//     k--;

//     int i = n - 3, j = n - 2;
//     while (k > 0 && i >= 0)
//     {
//         swap(s[i], s[j]);
//         k--;

//         string s1 = s;
//         for (int m = n - 2; m > i && k--; m--)
//         {
//             swap(s1[m + 1], s1[m]);

//             if (k == 0)
//             {
//                 cout << s1;
//                 return;
//             }
//         }

//         i--, j--;
//     }

//     i = n - 2, j = n - 1;
//     while (k > 0 && i > 0)
//     {
//         swap(s[i], s[j]);
//         string s1 = s;
//         i--, j--, k--;
//     }
//     cout << s;
// }

void solve()
{

    int n, k;
    cin >> n >> k;

    string s(n, 'a');
    for (int i = n - 2; i >= 0; i--)
    {
        if (k <= n - i - 1)
        {
            s[i] = 'b';
            s[n - k] = 'b';

            cout << s;
            return;
        }

        k -= (n - i - 1);
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
        cout << '\n';
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/