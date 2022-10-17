
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
RECURSIVE
int maxPages(int n, int x, vector<int> p, vector<int> s)
{
    if (n == 0)
    {
        return 0;
    }

    if (n != 0 && x - p[n - 1] < 0)
    {
        return maxPages(n - 1, x, p, s);
    }

    return max(maxPages(n - 1, x, p, s), maxPages(n - 1, x - p[n - 1], p, s) + s[n - 1]);
}
*/

// DP
/*
    dp[i][j] => (no of books)*(money available) => Stores maximum pages for 'n' no of books with 'x' available money
    dp[i+1][j] = max(dp[i][j], s[i] + dp[i][j-p[i]]);
*/

int maxPages(int totalBooks, int totalPrice, vector<int> price_of_book, vector<int> no_of_pages, vector<vector<int>> &dp)
{
    for (int i = 0; i < totalBooks; i++) // ith book
    {
        for (int price = 0; price <= totalPrice; price++)
        {
            dp[i + 1][price] = dp[i][price];
            if (price >= price_of_book[i])
            {
                dp[i + 1][price] = max(dp[i][price], no_of_pages[i] + dp[i][price - price_of_book[i]]);
            }
        }
    }

    return dp[totalBooks][totalPrice];
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> p(n), s(n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    cout << maxPages(n, x, p, s, dp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
TC:
4 10
4 8 5 3
5 12 8 1

-> Possible Combination (Total Combination of Buying Books):
-> Can be represented using Bits of 4 (No of Books => No of Bits to represent)
    None => 0000
    1 => 1000
    2 => 0100
    3 => 0010
    4 => 0001
    1,2 => 1100
    1,3 => 1010
    1,4 => 1001
    2,3 => 0110
    2,4 => 0101
    3,4 => 0011
    1,2,3 => 1110
    1,2,4 => 1101
    1,3,4 => 1011
    2,3,4 => 0111
    1,2,3,4 => 1111
*/
