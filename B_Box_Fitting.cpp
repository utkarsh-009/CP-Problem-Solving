#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
- As width of each rectangle is power of 2, hence we count powers of two, 2^20 is maximum possible power of 2.
- Pick the largest available rectangle that can fit into the current layer, and place it there. Repeat until this layer cannot
fit any more rectangles.
- If more rectangles remain, increment height by 1 and now repeat the last three steps. Else, output the current value of height.
*/
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
            // Shifting 1 bit by size and taking its AND with cnt[size] (which stores remaining powers of 2)
            if (cnt[size] && (1 << size) <= BOXwidth_left)
            {
                largest = size;
                break;
            }
        }

        if (largest == -1) // The boxwidth remaining is not sufficient to place new box, hence we increase height
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

        // Now, updating cnt array and remaining box width
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