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

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> freq(26);
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    int pair = 0;
    int single = 0;
    for (int i = 0; i < 26; i++)
    {
        pair += (freq[i] / 2);
        single += (freq[i] % 2);
    }

    int len = 2*(pair/k);
    single += 2*(pair%k);
    if(single >= k){len++;}

    cout << len;
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
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/