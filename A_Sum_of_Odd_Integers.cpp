#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
NOTE: sum of k odd integers is k^2 => When sum = n, there should be sqrt(n) maximum no of distinct odd integers that could make sum = n
- E + O => O
- O + O => E
- E + E => E

- As O + O = E (sum is even), now if we add one more O to the sum => E + O => O, i.e. sum is odd now
- Observations:
    -> sqrt(n) >= k
    -> If sum of k distinct odd integers is even => k should also be even inorder to make sum possible
    -> If sum of k distinct odd integers is odd => k should also be odd inorder to make sum possible

*/

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n, k;
    cin >> n >> k;

    if (sqrt(n) < k)
    {
        cout << "NO";
    }
    else
    {
        ((n % 2 == k % 2) ? cout << "YES" : cout << "NO");
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
IMP
-> ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122

-> Fermat’s little theorem: (Here, m is prime can be = 1000000007 )
    1 % m = a^(m-1) % m
    a^(-1) % m ≡ a^(m-2) % m
*/