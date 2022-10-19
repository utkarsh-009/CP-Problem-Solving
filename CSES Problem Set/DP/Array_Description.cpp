#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
DP:
dp[][] => position * arrValue
*/
ll NoOfArrays(int n, int m, vector<int> arr, vector<vector<ll>> &numberOfArrays)
{

    if (arr[0] != 0) // When, 1st element is known
    {
        numberOfArrays[0][arr[0]] = 1;
    }
    else // When, 1st element is unknown
    {
        for (int i = 0; i <= m; i++)
        {
            numberOfArrays[0][i] = 1;
        }
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 0) // element unknown
        {
            for (int j = 1; j <= m; j++)
            {
                // ALL THREE CASES: j-1, j, j+1
                if (j - 1 >= 1) // j-1 should be in bounds
                {
                    numberOfArrays[i][j] = (numberOfArrays[i][j] + numberOfArrays[i - 1][j - 1]) % mod;
                }
                numberOfArrays[i][j] = (numberOfArrays[i][j] + numberOfArrays[i - 1][j]) % mod;
                if (j + 1 <= m) // j + 1 should be in bounds
                {
                    numberOfArrays[i][j] = (numberOfArrays[i][j] + numberOfArrays[i - 1][j + 1]) % mod;
                }
            }
        }

        else // element is known
        {
            if (arr[i] - 1 >= 1) // arr[i] - 1 should be in bounds
            {
                numberOfArrays[i][arr[i]] = (numberOfArrays[i][arr[i]] + numberOfArrays[i - 1][arr[i] - 1]) % mod;
            }
            numberOfArrays[i][arr[i]] = (numberOfArrays[i][arr[i]] + numberOfArrays[i - 1][arr[i]]) % mod;
            if (arr[i] + 1 <= m) // arr[i] + 1 should be in bounds
            {
                numberOfArrays[i][arr[i]] = (numberOfArrays[i][arr[i]] + numberOfArrays[i - 1][arr[i] + 1]) % mod;
            }
        }
    }

    ll totalNumberOfArrays = 0;
    for (int i = 1; i <= m; i++)
    {
        totalNumberOfArrays = (totalNumberOfArrays + numberOfArrays[n - 1][i]) % mod;
    }

    return totalNumberOfArrays;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n); // given array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<ll>> numberOfArrays(n, vector<ll>(m + 1, 0));

    cout << NoOfArrays(n, m, arr, numberOfArrays);
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