#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
#include <cmath>
#include <bitset>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>
#include <iomanip>
using namespace std;

#define int int64_t
int arr[(int)1e6 + 10];
set<int> tprime;

// NOTE: only squares of prime numbers are T-primes
void t_prime()
{
    tprime.insert(4);                         // Only even T prime number
    for (int i = 3; i < (int)1e6 + 1; i += 2) // Even numbers are not prime, hence we will find squares of even prime no
    {
        if (arr[i] == 0)
        {
            tprime.insert(i * i);
            for (int j = i; j <= (int)1e6; j += i) // As we need only squares of prime number, hence we will mark non-prime number as 1
            {
                arr[j] = 1; // To mark non prime numbers
            }
        }
    }
}

int_fast32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    t_prime();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (tprime.find(x) != tprime.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}