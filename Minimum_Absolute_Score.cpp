#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
- Let’s first convert every Ai to Bi using right rotations. At the i-th index, this has a cost of:
    •	Bi−Ai, if Ai≤Bi
    •	Bi−Ai+26, if Ai>Bi.

- Let this cost for index i be Ci, and S = ∑Ci be our initial cost.
- Now, we want to use the Bi→Ai right rotation at some indices instead to make the absolute value of SS as low as possible.
- Let’s see how this changes SS:
    •	First, we must subtract Ci from S, since we aren’t using the Ai→Bi rotation anymore.
    •	Then, we add the cost of the Bi→Ai rotation to S. Note that this is 
    exactly -(26 - Ci)−(26−Ci) (you can derive this from the definition of Ci given above).
- So, our change is S \to S - Ci - (26 - Ci) = S - 26S→S−Ci−(26−Ci)=S−26.
 This means it doesn’t matter which index we choose, the score is only going to decrease by 26.
- So, the possible scores we can obtain are {S,S−26,S−2⋅26,S−3⋅26,…,S−N⋅26}.
 The answer is thus the minimum absolute value among all these N+1 values.
*/

void solve()
{
    ll n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    vector<int> c(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            sum += 26 + b[i] - a[i];
        }
        else
        {
            sum += b[i] - a[i];
        }
        c[i] = sum;
    }

    ll minScore = sum;
    for (int i = 0; i < n; i++)
    {
        sum = sum - c[i] + (c[i] - 26);
        minScore = min(minScore, abs(sum));
    }

    cout << minScore;
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
        cout << "\n";
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/