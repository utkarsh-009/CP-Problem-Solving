#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ll sum = 0, maxSum = 0, num;
    string s;

    ifstream filein("day1INPUT.txt");

    if (filein.is_open())
    {
        while (!filein.fail())
        {
            string line;

            // filein >> num;
            getline(filein, line);

            stringstream strToint(line);
            int num = 0;
            strToint >> num;

            if (!filein.fail() && line.empty())
            {
                maxSum = max(maxSum, sum);
                sum = 0;
                continue;
            }

            if (!filein.fail())
            {
                sum += num;
            }
        }
    }
    else
    {
        cout << "File Cannot Open" << endl;
    }

    cout << maxSum;
}
