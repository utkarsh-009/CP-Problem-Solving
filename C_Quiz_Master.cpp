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

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    vector<vector<int>> primeFact(n);

    // storing prime factors of each of the numbers: stored as -> [idx] -> pf's of student value
    for (int i = 0; i < n; i++) // index of student
    {
        int stud = a[i];
        for (int j = 1; j * j <= stud && j <= m; j++)
        {
            if (stud % j == 0)
            {
                primeFact[i].push_back(j);
                if (j != stud / j && ((stud / j) <= m))
                {
                    primeFact[i].push_back(stud / j);
                }
            }
        }
    }

    // counts vector stores no of student proficient in particular topic i
    vector<int> counts(m + 1, 0);
    // no of topics having atleast one student having proficieny
    int profTopics = 0;
    int ans = INT_MAX;

    // USING SLIDING WINDOW TECHNIQUE
    for (int j = 0, i = 0; j < n; j++)
    {
        // updating counts and profTopics variable
        for (auto &f : primeFact[j])
        {
            counts[f]++;
            if (counts[f] == 1)
            {
                profTopics++;
            }
        }

        // if team forms for atleast one student proficient for every topic
        while (profTopics == m)
        {
            ans = min(ans, a[j] - a[i]);
            for (auto &f : primeFact[i])
            {
                counts[f]--;
                if (counts[f] == 0)
                {
                    profTopics--;
                }
            }

            i++;
        }
    }

    if (ans == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
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