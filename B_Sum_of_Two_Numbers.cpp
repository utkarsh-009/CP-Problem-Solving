#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int sumOfDig(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void solve()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdin);
    // #endif

    int n;
    cin >> n;

    int x = n / 2;
    int y = n - x;

    int sx = sumOfDig(x);
    int sy = sumOfDig(y);

    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (abs(sumOfDig(mid) - sumOfDig(n - mid)) <= 1)
        {
            cout << mid << " " << n - mid;
            break;
        }
        else if (sumOfDig(mid) > sumOfDig(n - mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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