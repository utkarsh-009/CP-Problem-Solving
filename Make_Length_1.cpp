#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

/*
Q:
You can perform the following operation on SS:
OP1:	Select an index i (1≤i<∣S∣) such that Si=Si+1.
OP2:	Set Si to 0 and remove Si+1 from the string.

M1: Using Stack
-initially, pushing first character of string into stack
- if top of stack equal to current char of string
- if match not found simply push current char of string
- If length already became 1 =>  The string can be made into length 1
  else => To make length = 1 possible, there should be only '0' or only '1' left.

M2:
If any of the continuous block of 1's has odd length,
it’s not possible to remove it completely and so the answer is “No”.
*/

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    stack<char> st;
    st.push(s[0]); // initially, pushing first character of string

    for (int i = 1; i < n; i++)
    {
        if (st.top() == s[i]) //  if top of stack equal to current char of string
        {
            // Performing operation 2
            st.pop();
            st.push('0');
        }
        else // if match not found simply push current char of string
        {
            st.push(s[i]);
        }
    }

    // If length already became 1 => The string can be made into length 1
    if (st.size() == 1)
    {
        cout << "YES" << endl;
    }
    // if length not 1, then we will check the matches created after removing the above matches
    else
    {
        char c = st.top();
        st.pop();

        // To make length = 1 possible, there should be only '0' or only '1' left.
        while (!st.empty() && st.top() == c)
        {
            st.pop();
        }

        if (st.empty())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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
    }
}

/*
ASCII VALUES
    0-9 => 48-57
    A-Z => 65-90
    a-z => 97-122
*/