#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int p1 = 0, p2 = 0;

    while (p1 < m && p2 < n)
    {
        if (nums1[p1] >= nums2[p2])
        {
            cout << nums2[p2] << " ";
            p2++;
        }

        if (nums2[p2] > nums1[p1])
        {
            cout << nums1[p1] << " ";
            p1++;
        }
    }

    for (int i = p1; i < m; i++)
    {
        cout << nums1[i] << " ";
    }

    for (int i = p2; i < n; i++)
    {
        cout << nums2[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    merge(nums1, m, nums2, n);
}