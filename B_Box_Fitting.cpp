#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void solve()
{
    ll n, box_w;
    cin >> n >> box_w;

    vector<int> cnt(20); // to count powers of two, 2^20 is maximum possible power of 2
    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        cnt[log2(w)]++;
    }

    int h = 1, BOXwidth_left = box_w;
    for (int i = 0; i < n; i++)
    {
        int largest = -1;
        for (int size = 19; size >= 0; size--)
        {
            if (cnt[size] && (1 << size) <= BOXwidth_left)
            {
                largest = size;
                break;
            }
        }

        if (largest == -1)
        {
            h++;
            BOXwidth_left = box_w;
            for (int size = 19; size >= 0; size--)
            {
                if (cnt[size] && (1 << size) <= BOXwidth_left)
                {
                    largest = size;
                    break;
                }
            }
        }

        cnt[largest] -= 1;
        BOXwidth_left -= 1 << largest;
    }

    cout << h;
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