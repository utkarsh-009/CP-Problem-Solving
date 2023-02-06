#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    string temp;
    cin >> temp;
    int sz = temp.length();

    int i, j, k;
    // 1 digit
    for (i = 0; i < sz; i++)
    {
        int num = temp[i] - '0';
        if (num % 8 == 0)
        {
            cout << "YES" << endl;
            cout << num;
            return;
        }
    }

    // 2 digit
    for (i = 0; i < sz; i++)
    {
        int x = temp[i] - '0';
        for (j = i + 1; j < sz; j++)
        {
            int y = temp[j] - '0';
            int num = 10 * x + y;

            if (num % 8 == 0)
            {
                cout << "YES" << endl;
                cout << num;
                return;
            }
        }
    }

    // 3 digit
    for (i = 0; i < sz; i++)
    {
        int x = temp[i] - '0';
        for (j = i + 1; j < sz; j++)
        {
            int y = temp[j] - '0';
            for (k = j + 1; k < sz; k++)
            {
                int z = temp[k] - '0';
                int num = 100 * x + 10 * y + z;
                if (num % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << num;
                    return;
                }
            }
        }
    }

    cout << "NO";
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