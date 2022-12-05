#include <bits/stdc++.h>
#include <sstream>
#define ll long long
#define mod 1000000007
using namespace std;

/*
[D]                     [N] [F]
[H] [F]             [L] [J] [H]
[R] [H]             [F] [V] [G] [H]
[Z] [Q]         [Z] [W] [L] [J] [B]
[S] [W] [H]     [B] [H] [D] [C] [M]
[P] [R] [S] [G] [J] [J] [W] [Z] [V]
[W] [B] [V] [F] [G] [T] [T] [T] [P]
[Q] [V] [C] [H] [P] [Q] [Z] [D] [W]
 1   2   3   4   5   6   7   8   9
*/

void solve()
{
#ifndef ONLINE_JUDGE
    freopen("day5INPUT.txt", "r", stdin);
    // freopen("output.txt", "w", stdin);
#endif

    int t = 503;

    map<int, vector<char>> mp;
    mp[1] = {'Q', 'W', 'P', 'S', 'Z', 'R', 'H', 'D'};
    mp[2] = {'V', 'B', 'R', 'W', 'Q', 'H', 'F'};
    mp[3] = {'C', 'V', 'S', 'H'};
    mp[4] = {'H', 'F', 'G'};
    mp[5] = {'P', 'G', 'J', 'B', 'Z'};
    mp[6] = {'Q', 'T', 'J', 'H', 'W', 'F', 'L'};
    mp[7] = {'Z', 'T', 'W', 'D', 'L', 'V', 'J', 'N'};
    mp[8] = {'D', 'T', 'Z', 'C', 'J', 'G', 'H', 'F'};
    mp[9] = {'W', 'P', 'V', 'M', 'B', 'H'};

    for (int q = 0; q < t; q++)
    {
        int crates = 0, src = 0, dst = 0;
        string s;
        getline(cin, s);
        // cin >> s;

        int n = s.length();
        string num = "";
        for (int i = 0; i < n; i++)
        {
            if (num == "" && isdigit(s[i]) && crates == 0)
            {
                while (isdigit(s[i]))
                {
                    num += s[i];
                    i++;
                }

                istringstream(num) >> crates;
                num = "";
            }

            else if (num == "" && isdigit(s[i]) && src == 0)
            {
                while (isdigit(s[i]))
                {
                    num += s[i];
                    i++;
                }

                istringstream(num) >> src;
                num = "";
            }
            else if (num == "" && isdigit(s[i]) && dst == 0)
            {
                while (isdigit(s[i]))
                {
                    num += s[i];
                    i++;
                }

                istringstream(num) >> dst;
                num = "";
            }
        }

        // cout << crates << " " << src << " " << dst << " " << endl;
        int sz = mp[dst].size();
        for (int i = 0; i < crates; i++)
        {
            mp[dst].push_back(mp[src].back());
            mp[src].pop_back();
        }

        reverse(mp[dst].begin() + sz, mp[dst].begin() + sz + crates);
    }

    for (int i = 1; i <= 9; i++)
    {
        cout << mp[i].back();
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