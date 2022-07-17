#include <bits/stdc++.h>
#define ll long long
int arr[int(1e6 + 1)];
set<int> tprime;
using namespace std;

// NOTE: only squares of prime numbers are T-primes
void T_prime()
{
    tprime.insert(4); // Only even T prime number
    for (int i = 3; i < 1e6 + 1; i += 2)
    {
        if (arr[i] == 0) 
        {
            tprime.insert(i * i);
            for (int j = i; j < 1e6; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}