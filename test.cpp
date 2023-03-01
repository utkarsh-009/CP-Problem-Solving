#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

vector<long long> solve(vector<vector<int>> &A, vector<vector<int>> &B)
{
    unordered_map<long long, set<long long>> mp;
    long long total = 0;

    for (int i = 0; i < A.size(); i++)
    {
        long long x1 = A[i][0], x2 = A[i][1], strength = A[i][2];
        for (int j = x1; j <= x2; j++)
        {
            mp[j].insert(strength);
        }
        total += (x2 - x1 + 1);
    }

    vector<long long> ans;
    for (int i = 0; i < B.size(); i++)
    {
        long long x = B[i][0], strength = B[i][1];
        auto it = mp[x].lower_bound(strength);
        if (it != mp[x].begin())
        {
            long long cnt = distance(mp[x].begin(), it);
            mp[x].erase(mp[x].begin(), it);
            total -= cnt;
        }
        ans.push_back(total);
    }

    return ans;
}

int main()
{
    vector<vector<int>> A{{1, 3, 7}, {2, 5, 4}, {4, 8, 6}}, B{{3, 5}, {5, 8}};
    for (ll x : solve(A, B))
    {
        cout << x << " ";
    }
}