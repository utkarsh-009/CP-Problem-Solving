#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i < INT_MAX; i++)
    {
        for (int j = 1; j < INT_MAX; j++)
        {
            if (99998 * (i ^ j) == 99997 * i + j)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
}