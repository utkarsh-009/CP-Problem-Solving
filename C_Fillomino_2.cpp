#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Recursive Solution to check all possible combinations and finding the required solution among them
-> We will perform dfs from bottom, and find the possible combination where all the conditions are satisfied.
*/
int arr[501][501];
void dfsRec(int x, int y, int a, int &freq, int n)
{
    if (x < 0 || y < 0 || x >= n || y >= n || arr[x][y] != -1 || freq == 0) // checking condition for valid cell to place remaining element
    {
        return;
    }

    freq--;
    arr[x][y] = a;
    dfsRec(x + 1, y, a, freq, n);
    dfsRec(x, y - 1, a, freq, n);
}

void solve()
{
    int n;
    cin >> n;

    memset(arr, -1, sizeof(arr)); // to keep track of visited cell
    vector<int> a(n);
    for (int i = 0; i < n; i++) // to store frequency of elements
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        int freq = a[i];
        dfsRec(i, i, a[i], freq, n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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