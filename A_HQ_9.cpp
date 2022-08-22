#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    cin >> s;

    if (s.find('H') != string::npos ||
        s.find('Q') != string::npos ||
        s.find('9') != string::npos)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}