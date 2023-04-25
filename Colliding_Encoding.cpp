#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        vector<char> m(26);
        for (int i = 0; i < 26; i++)
        {
            char c;
            cin >> c;

            m[i] = c;
        }

        int n;
        cin >> n;

        map<string, int> mp;
        bool collision = false;
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;

            string ans = "";
            for (int k = 0; k < s.length(); k++)
            {
                ans.push_back(m[s[k] - 'A']);
            }

            if (mp[ans] == 1)
            {
                collision = true;
            }
            else
            {
                mp[ans]++;
            }
        }

        string ans = ((collision) ? "YES" : "NO");
        cout << "Case #" << i << ": " << ans << endl;
    }
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