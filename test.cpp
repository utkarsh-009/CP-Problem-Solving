#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Number of items
    int n;
    cin >> n;
    // category of items
    int category[n];
    // Input of category of items
    for (int i = 0; i < n; i++)
    {
        cin >> category[i];
    }
    // price of items
    int prices[n];
    // Input of prices of items
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    // store the maximum profit
    int maximumProfit = 0;
    // store unique category of items till current item
    set<int> uniqueCategory;
    // Iterate items to find the maximum profit
    for (int i = 0; i < n; i++)
    {
        // add current category into unique category items
        uniqueCategory.insert(category[i]);
        // count the total unique category
        int totalUniqueCategory = uniqueCategory.size();
        // find the total current profit by multiplying
        // price[i]*totalUniqueItems till the item
        int currentProfit = totalUniqueCategory * prices[i];
        cout << currentProfit << " ";
        // add current profit into total profit
        maximumProfit += currentProfit;
    }
    // print total profit
    cout << maximumProfit << endl;
    return 0;
}